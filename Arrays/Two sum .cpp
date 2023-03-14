int *twoSum(int *nums, int numsSize, int target, int *returnSize){
    *returnSize = 2;
    int *re =(int*) malloc((*returnSize) * sizeof(int));

    for (int i = 0; i < numsSize - 1; i++) {
        for (int j = i + 1; j <= numsSize-1; j++) {
            if (nums[i] + nums[j] == target) {
               re[0] = i;
               re[1] = j;
                break;
            }
        }
    }
    if(re==NULL)
    return ;
    
    return re;
}