#include <stdio.h>

/**
 * Given two arrays of integers nums and index. 
 * Your task is to create target array under the following rules:
 *
 *  Initially target array is empty.
 *   a. From left to right read nums[i] and index[i], 
 *      insert at index index[i] the value nums[i] in target array.
 *   b. Repeat the previous step until there are no elements to read in nums and index.
 *
 * Return the target array.
 *
 *It is guaranteed that the insertion operations will be valid.
 ****************************************************************/
int* createTargetArray(int* nums, int numsSize, int* index, int indexSize, int* returnSize){

    int temp = 0, temp2;
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

int main()
{
    int nums[] = {0,1,2,3,4};
    int  indices[] = {0,1,2,2,1};
    int retSize;

    int * shuffled = createTargetArray(nums, 5, indices, 5,  &retSize);

    for(int i=0; i<retSize; i++)
    {
        printf("%d ", shuffled[i]);
    }
    return 0;
}