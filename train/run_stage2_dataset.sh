# export ZE_AFFINITY_MASK=4

# export PROFILE=1
# export KINETO=1
# export DNNL_VERBOSE=1

# settings for torchccl
export TORCH_LLM_ALLREDUCE=1

Run_llama3-8b_peft_fsdp() {

    accelerate launch  --config_file "fsdp_config.yaml"  mle.py \
        --model_name_or_path ${model} \
	--data_path //root/llm/fine-tuning/code-gen/stage2_dataset.json \
        --bf16 True \
        --model_max_length 4096 \
        --output_dir="/localdisk/output" \
        --evaluation_strategy="no" \
        --learning_rate=1e-5 \
        --gradient_accumulation_steps=1 \
        --per_device_train_batch_size=2 \
        --per_device_eval_batch_size=8 \
        --num_train_epochs=3 \
        --save_steps=100 \
        --logging_steps=1 \
        --save_total_limit=8 2>&1 | tee stage2_dataset.log

}


main() {

    #model='meta-llama/Meta-Llama-3-8B'
    #model='mistralai/Mistral-7B-v0.1'
    model="meta-llama/Meta-Llama-3.1-8B"
    #model=/root/llm/fine-tuning/RTL-Coder/train/output

   # Run_llama3-8b_peft_singlecard
    Run_llama3-8b_peft_fsdp

}

main
