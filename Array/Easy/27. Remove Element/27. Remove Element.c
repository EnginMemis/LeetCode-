int removeElement(int* nums, int numsSize, int val){
    int i, j;
    int index;
    
    int *control;
    index = 0;
    
    control = (int *)calloc(numsSize, sizeof(int));
    
    for(i = 0; i < numsSize; ++i){
        if(nums[i] != val){
            index++;
            control[i] = 1;
        }
    }
    
    j = 0;
    for(i = 0; i < numsSize; ++i){
        if(control[i] == 1){
            nums[j] = nums[i];
            j++;
        }
    }
    return index;
}
