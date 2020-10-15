

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){
    
    for(int i=0; i<indexSize; i++)
    {
        int temp = nums[index[i]];
        nums[index[i]] = nums[i];
        
        
        for(int j=index[i]; j<i; j++)
        {
            int temp2 = nums[j+1];
            nums[j+1] = temp;
            temp =  temp2;
        }

    }
    *returnSize = numsSize;
    return nums;

}