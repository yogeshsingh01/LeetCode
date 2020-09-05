

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* shuffle(int* nums, int numsSize, int n, int* returnSize){
    
    int *shuffle = (int *)malloc(numsSize * sizeof(int));
    for(int i=0; i<numsSize; i=i+2)
    {
        shuffle[i] = nums[i>>1];
        shuffle[i+1] = nums[n+(i>>1)];
    }
    *returnSize = numsSize;
    return shuffle;

}