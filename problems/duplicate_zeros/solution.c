

void duplicateZeros(int* arr, int arrSize){

    for(int i=0; i< arrSize; i++)
    {
        if(arr[i]==0)
        {
            //moving from backward as logic was easy this way
            for(int j=arrSize-1; j>i; j--)
            {
                // discarding last one
                arr[j] = arr[j-1]; 
            }
            if( (i+1) < arrSize)
                arr[i+1] = 0;
            // we know that at i+1 position it is zero, it is now redundant
            i = i+1;
        }
    }
}