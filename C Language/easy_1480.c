/**
 * Problem :
 *
 * Given an array nums. We define a running sum of an array as 
 * runningSum[i] = sum(nums[0]…nums[i]).
 *
 * Return the running sum of nums. 
 ****************************************************************/

int* runningSum(int* nums, int numsSize, int* returnSize){
    
    for(int i=1; i<numsSize; i++)
    {
        *(nums+i) = nums[i]+nums[i-1];
    }
    // make sure to set returnSize
    *returnSize = numsSize;
    return nums;
}