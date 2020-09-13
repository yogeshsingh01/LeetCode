

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){
    
    int temp = 0, temp2 = 0;
    for(int i=0; i<indexSize; i++)
    {
        temp = nums[index[i]];
        nums[index[i]] = nums[i];
        
        
        for(int j=index[i]; j<i; j++)
        {
            temp2 = nums[j+1];
            nums[j+1] = temp;
            temp =  temp2;
        }

    }
    *returnSize = numsSize;
    return nums;

}