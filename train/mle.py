from datasets import load_dataset
from typing import cast
import json
import copy
import logging
from dataclasses import dataclass, field
from typing import Optional, Dict, Sequence
import torch
from torch.utils.data import Dataset
from transformers import (
    CONFIG_MAPPING,
    MODEL_FOR_CAUSAL_LM_MAPPING,
    AutoConfig,
    AutoModelForCausalLM,
    AutoTokenizer,
    HfArgumentParser,
    Trainer,
    TrainingArguments,
    default_data_collator,
    is_torch_tpu_available,
    set_seed,
    BitsAndBytesConfig
)
import transformers
import torch.distributed as dist
import os 
from peft import LoraConfig, get_peft_model

IGNORE_INDEX = -100
DEFAULT_PAD_TOKEN = "[PAD]"
DEFAULT_EOS_TOKEN = "</s>"
DEFAULT_BOS_TOKEN = "</s>"
DEFAULT_UNK_TOKEN = "</s>"


@dataclass
class ModelArguments:
    model_name_or_path: Optional[str] = field(default="facebook/opt-125m")
    use_peft: bool = field(
        default=False,
        metadata={
            "help": "Whether to use PEFT, default is LoRA`]"
        })


@dataclass
class DataArguments:
    data_path: str = field(default=None, metadata={"help": "Path to the training data."})


@dataclass
class TrainingArguments(transformers.TrainingArguments):
    cache_dir: Optional[str] = field(default=None)
    optim: str = field(default="adamw_torch")
    model_max_length: int = field(
        default=2048,
        metadata={"help": "Maximum sequence length. Sequences will be right padded (and possibly truncated)."},
    )


def print_trainable_parameters(model):
    """
    Prints the number of trainable parameters in the model.
    """
    trainable_params = 0
    all_param = 0
    for _, param in model.named_parameters():
        all_param += param.numel()
        if param.requires_grad:
            trainable_params += param.numel()
    print(
        f"trainable params: {trainable_params} || all params: {all_param} || trainable%: {100 * trainable_params / all_param}"
    )

def smart_tokenizer_and_embedding_resize(
    special_tokens_dict: Dict,
    tokenizer: transformers.PreTrainedTokenizer,
    model: transformers.PreTrainedModel,
):
    """Resize tokenizer and embedding.

    Note: This is the unoptimized version that may make your embedding size not be divisible by 64.
    """
    num_new_tokens = tokenizer.add_special_tokens(special_tokens_dict)
    model.resize_token_embeddings(len(tokenizer))

    if num_new_tokens > 0:
        input_embeddings = model.get_input_embeddings().weight.data
        output_embeddings = model.get_output_embeddings().weight.data

        input_embeddings_avg = input_embeddings[:-num_new_tokens].mean(dim=0, keepdim=True)
        output_embeddings_avg = output_embeddings[:-num_new_tokens].mean(dim=0, keepdim=True)

        input_embeddings[-num_new_tokens:] = input_embeddings_avg
        output_embeddings[-num_new_tokens:] = output_embeddings_avg


def _tokenize_fn(strings: Sequence[str], tokenizer: transformers.PreTrainedTokenizer) -> Dict:
    """Tokenize a list of strings."""
    tokenized_list = [
        tokenizer(
            text,
            return_tensors="pt",
            padding="longest",
            max_length=tokenizer.model_max_length,
            truncation=True,
        )
        for text in strings
    ]
    print("smart token")
    input_ids = labels = [tokenized.input_ids[0] for tokenized in tokenized_list]
    input_ids_lens = labels_lens = [
        tokenized.input_ids.ne(tokenizer.pad_token_id).sum().item() for tokenized in tokenized_list
    ]
    return dict(
        input_ids=input_ids,
        labels=labels,
        input_ids_lens=input_ids_lens,
        labels_lens=labels_lens,
    )


def preprocess(
    sources: Sequence[str],
    targets: Sequence[str],
    tokenizer: transformers.PreTrainedTokenizer,
) -> Dict:
    """Preprocess the data by tokenizing."""
    examples = [s + t for s, t in zip(sources, targets)]
    print(examples[0])

    examples_tokenized, sources_tokenized = [_tokenize_fn(strings, tokenizer) for strings in (examples, sources)]
    input_ids = examples_tokenized["input_ids"]
    labels = copy.deepcopy(input_ids)
    for label, source_len in zip(labels, sources_tokenized["input_ids_lens"]):
        label[:source_len] = IGNORE_INDEX
    return dict(input_ids=input_ids, labels=labels)


class SupervisedDataset(Dataset):
    """Dataset for supervised fine-tuning."""

    def __init__(self, data_path: str, tokenizer: transformers.PreTrainedTokenizer):
        super(SupervisedDataset, self).__init__()
        logging.warning("Loading data...")
        #list_data_dict = [json.loads(l) for l in open(data_path, "r")]
        list_data_dict = json.load(open(data_path, encoding='utf-8'))

        logging.warning("Formatting inputs...")
        sources = [
           example['Instruction'] + '\n'
            for example in list_data_dict
        ]
        targets = [f"{example['Response'][-1]}{tokenizer.eos_token}" for example in list_data_dict]
        logging.warning("Tokenizing inputs... This may take some time...")
        data_dict = preprocess(sources, targets, tokenizer)

        self.input_ids = data_dict["input_ids"]
        self.labels = data_dict["labels"]

    def __len__(self):
        return len(self.input_ids)

    def __getitem__(self, i) -> Dict[str, torch.Tensor]:
        return dict(input_ids=self.input_ids[i], labels=self.labels[i])


@dataclass
class DataCollatorForSupervisedDataset(object):
    """Collate examples for supervised fine-tuning."""

    tokenizer: transformers.PreTrainedTokenizer

    def __call__(self, instances: Sequence[Dict]) -> Dict[str, torch.Tensor]:
        input_ids, labels = tuple([instance[key] for instance in instances] for key in ("input_ids", "labels"))
        input_ids = torch.nn.utils.rnn.pad_sequence(
            input_ids, batch_first=True, padding_value=self.tokenizer.pad_token_id
        )
        labels = torch.nn.utils.rnn.pad_sequence(labels, batch_first=True, padding_value=IGNORE_INDEX)
        return dict(
            input_ids=input_ids,
            labels=labels,
            attention_mask=input_ids.ne(self.tokenizer.pad_token_id),
        )


def make_supervised_data_module(tokenizer: transformers.PreTrainedTokenizer, data_args) -> Dict:
    """Make dataset and collator for supervised fine-tuning."""
    train_dataset = SupervisedDataset(tokenizer=tokenizer, data_path=data_args.data_path)
    data_collator = DataCollatorForSupervisedDataset(tokenizer=tokenizer)
    return dict(train_dataset=train_dataset, eval_dataset=None, data_collator=data_collator)

def save_tunable_parameters(model, path):
    saved_params = {
        k: v.to("cpu") for k, v in model.named_parameters() if v.requires_grad
    }
    torch.save(saved_params, path)
def train():
    parser = transformers.HfArgumentParser((ModelArguments, DataArguments, TrainingArguments))
    model_args, data_args, training_args = parser.parse_args_into_dataclasses()
    training_args = cast(TrainingArguments, training_args)
    model_args = cast(TrainingArguments, model_args)
    data_args = cast(TrainingArguments, data_args)

    # distributed setup
    os.environ['CCL_PROCESS_LAUNCHER'] = 'none'

    local_rank = int(os.getenv("LOCAL_RANK", "0"))
    world_size = int(os.getenv("WORLD_SIZE", "1"))
    os.environ['CCL_LOCAL_SIZE'] = str(world_size)
    os.environ['CCL_LOCAL_RANK'] = str(local_rank)


    model = transformers.AutoModelForCausalLM.from_pretrained(
        model_args.model_name_or_path,
        torch_dtype=torch.float32,
        attn_implementation="sdpa"
    )

    # PEFT LoRA setting
    if model_args.use_peft:
        lora_config = LoraConfig(
            r=8, 
            lora_alpha=16, 
            target_modules=["q_proj", "v_proj"], 
            #target_modules=["q_proj", "k_proj", "v_proj", "o_proj", "gate_proj", "up_proj", "down_proj"],
            #target_modules=["q_proj", "k_proj", "v_proj"],
            lora_dropout=0.05, 
            bias="none", 
            task_type="CAUSAL_LM"
        )
        model = get_peft_model(model, lora_config)

    model.gradient_checkpointing_enable()
    
    print_trainable_parameters(model)

    tokenizer = transformers.AutoTokenizer.from_pretrained(
        model_args.model_name_or_path,
        cache_dir=training_args.cache_dir,
        model_max_length=training_args.model_max_length,
        padding_side="left",
        use_fast=False,
    )


    #model = model.to('xpu')
    #model.eval()
    #import torch.distributed._shard.checkpoint as dist_cp
    #state_dict = {
    #    "model": model.state_dict()
    #    }
    #dist_cp.load_state_dict(
    #            state_dict=state_dict,
    #            #storage_reader= torch.distributed.checkpoint.FileSystemReader("/root/llm/fine-tuning/RTL-Coder/train/output/checkpoint-261/pytorch_model_fsdp_0"),
    #            storage_reader= torch.distributed.checkpoint.FileSystemReader("/localdisk/output/checkpoint-2278//pytorch_model_fsdp_0"),
    #            no_dist=True,
    #        )
    #model.load_state_dict(state_dict["model"])
    #model.save_pretrained("saved-stage2-model")
    #quit()

    #
    #test_dataset = json.load(open("../test_dataset.json", encoding='utf-8'))
    ##test_dataset = [json.loads(l) for l in open("../dataset/Resyn27k.json", "r")]
    #black_list = [13, 15]
    #for i, input_text in enumerate(test_dataset):
    #    #input_text = "In January-September 2009 , the Group 's net interest income increased to EUR 112.4 mn from EUR 74.3 mn in January-September 2008 ."
    #    #inputs = tokenizer(input_text["Instruction"], return_tensors="pt").to("xpu")
    #    if i in black_list:
    #        continue
    #    inputs = tokenizer(input_text, return_tensors="pt").to("xpu")
    #    outputs = model.generate(input_ids=inputs["input_ids"], max_new_tokens=2048)
    #    print("input sentence: ", input_text)
    #    print("================================================================")
    #    result = tokenizer.batch_decode(outputs.detach().cpu().numpy(), skip_special_tokens=True)[0]
    #    print(result)
    #    result = result[len(input_text):]
    #    print(" output prediction: ", result)
    #    try:
    #        json_result = json.loads(result)
    #        print(" output prediction: ", json_result)
    #        with open("result"+ str(i)+".json", "w") as f:
    #            json.dump(json_result, f, indent=4)
    #        print("================================================================")
    #    except:
    #        continue
    #quit()

    if tokenizer.pad_token is None:
        smart_tokenizer_and_embedding_resize(
            special_tokens_dict=dict(pad_token=DEFAULT_PAD_TOKEN),
            tokenizer=tokenizer,
            model=model,
        )
    if "llama" in model_args.model_name_or_path:
        tokenizer.add_special_tokens(
            {
                "eos_token": DEFAULT_EOS_TOKEN,
                "bos_token": DEFAULT_BOS_TOKEN,
                "unk_token": DEFAULT_UNK_TOKEN,
            }
        )
        if model_args.use_peft:
            if hasattr(model, "enable_input_require_grads"):
                model.enable_input_require_grads()
            else:
                def make_inputs_require_grad(module, input, output):
                    output.requires_grad_(True)

                model.get_input_embeddings().register_forward_hook(make_inputs_require_grad)


    data_module = make_supervised_data_module(tokenizer=tokenizer, data_args=data_args)
    trainer = Trainer(model=model, tokenizer=tokenizer, args=training_args, **data_module)

    # set fsdp wrap policy, ensure the LoRA part could be warpped separately
    if model_args.use_peft and trainer.is_fsdp_enabled:
        from peft.utils.other import fsdp_auto_wrap_policy
        fsdp_plugin = trainer.accelerator.state.fsdp_plugin
        fsdp_plugin.auto_wrap_policy = fsdp_auto_wrap_policy(trainer.model)
    
    model.config.use_cache = True

    trainer.train()
    #trainer.save_state()
    if trainer.is_fsdp_enabled:
        trainer.accelerator.state.fsdp_plugin.set_state_dict_type("FULL_STATE_DICT")
    trainer.save_model(output_dir=training_args.output_dir)
    
    #model.to("cpu")
    #model.save_pretrained("saved_pretraind_model")

    #model.eval()
    #test_dataset = json.load(open("../test_dataset.json", encoding='utf-8'))
    ##test_dataset = [json.loads(l) for l in open("../dataset/Resyn27k.json", "r")]
    #for i, input_text in enumerate(test_dataset):
    #    #input_text = "In January-September 2009 , the Group 's net interest income increased to EUR 112.4 mn from EUR 74.3 mn in January-September 2008 ."
    #    #inputs = tokenizer(input_text["Instruction"], return_tensors="pt").to("xpu")
    #    inputs = tokenizer(input_text, return_tensors="pt").to("xpu")
    #    outputs = model.generate(input_ids=inputs["input_ids"], max_new_tokens=4096)
    #    print("input sentence: ", input_text)
    #    print("================================================================")
    #    result = tokenizer.batch_decode(outputs.detach().cpu().numpy(), skip_special_tokens=True)[0]
    #    print(result)
    #    result = result[len(input_text):]
    #    print(" output prediction: ", result)
    #    json_result = json.loads(result)
    #    print(" output prediction: ", json_result)
    #    with open("result"+ str(i)+".json", "w") as f:
    #        json.dump(json_result, f, indent=4)
    #    print("================================================================")


if __name__ == "__main__":
    train()

