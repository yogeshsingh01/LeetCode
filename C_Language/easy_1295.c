/**
 * Given an array nums of integers, return how many of them contain an even number of digits. 
 ****************************************************************************************** /
int findNumbers(int* nums, int numsSize){
    
    int noOfEvens=0;
    for(int i=0; i<numsSize; i++)
    {
        int noOfDigits = 0;
        while(nums[i])
        {
            nums[i] = nums[i]/10;
            noOfDigits++;
        }
        
        if(!(noOfDigits % 2))
        {
            noOfEvens++;
        }
    }
    return noOfEvens;
}