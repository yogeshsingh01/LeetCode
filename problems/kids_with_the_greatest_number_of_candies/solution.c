

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
bool* kidsWithCandies(int* candies, int candiesSize, int extraCandies, int* returnSize){
    *returnSize = candiesSize;
    bool * happyKids = (bool *)malloc(candiesSize*sizeof(bool));
    int max = candies[0];
    for(int i=1; i < candiesSize; i++)
    {
        if(candies[i] > max)
            max = candies[i];
    }
    
    for(int i=0; i < candiesSize; i++)
    {
        happyKids[i] = ((candies[i]+extraCandies) >= max) ? 1 : 0;           
    }
    return happyKids;
}