

/**
 * Note: The returned array must be malloced, assume caller calls free().
 */
int* decompressRLElist(int* nums, int numsSize, int* returnSize){
    
    int *list = (int *)malloc(sizeof(int));
    
    int size = 0;
    for(int i=0; i<numsSize; i=i+2)
    {
        int freq = nums[i];
        int val = nums[i+1];
        
        void *tmp = realloc(list, (size + freq)*sizeof(int));

        if (NULL == tmp)
        {
            free(list);
            return NULL;
        }
        else
        {
            list = tmp;
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