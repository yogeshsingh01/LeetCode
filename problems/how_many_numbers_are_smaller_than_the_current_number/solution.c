

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* smallerNumbersThanCurrent(int* nums, int numsSize, int* returnSize){
    
    int * returnArr = NULL;
    
    returnArr   =(int *)malloc(sizeof(int) *numsSize);
    *returnSize = numsSize;
    
    for(int i=0; i<numsSize; i++)
    {
        int max = 0;
        
        for(int j=0; j<numsSize; j++)
        {
            if(i == j)
                continue;
            if(nums[j] < nums[i])
            {
                max++;
            }
        }
        returnArr[i] = max;
    }
    return returnArr;
}