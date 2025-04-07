# export ZE_AFFINITY_MASK=4

# export PROFILE=1
# export KINETO=1
# export DNNL_VERBOSE=1

# settings for torchccl
export TORCH_LLM_ALLREDUCE=1

#model=/root/llm/fine-tuning/RTL-Coder/train/saved_pretrained_model
model=/root/llm/fine-tuning/RTL-Coder/train/saved-model-v1
#model=mistralai/Mistral-7B-v0.1

python mle_test.py \
    --model_name_or_path ${model} \
    --model_max_length 32768 \
    --output_dir="output" \
    --evaluation_strategy="epoch" \
    --learning_rate=1e-3 \
    --auto_find_batch_size=True \
    --num_train_epochs=1 \
    --save_steps=500 \
    --logging_steps=1 \
    --save_total_limit=8 2>&1 | tee llama3-8b_ft_singlecard_converge.log
