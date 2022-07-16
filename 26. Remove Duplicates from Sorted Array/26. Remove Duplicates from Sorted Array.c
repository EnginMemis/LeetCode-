int removeDuplicates(int* nums, int numsSize){
    int i;
    int index;
    int control[201] = {0};
    index = 0;
    
    for(i = 0; i < numsSize; ++i){
        if(control[ nums[i] + 100] == 0){
            control[ nums[i] + 100 ] = 1;
            nums[index] = nums[i];
            index++;
         }
    }
    return index;
}
