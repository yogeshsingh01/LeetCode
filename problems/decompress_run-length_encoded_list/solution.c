

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize){
    
    int *list = (int *)malloc(sizeof(int));
    
    int freq = 0, val = 0;
    int size = 0;
    for(int i=0; i<numsSize; i=i+2)
    {
        freq = nums[i];
        val = nums[i+1];
        
        list = realloc(list, (size + freq)*sizeof(int));

        if(NULL == list)
        {
            free(list);
            return NULL;
        }
        for (int j = size; j< (size + freq); j++)
        {
            list[j] = val;
        }
        size = size + freq;    
    }
    
    *returnSize = size;
    return list;
}