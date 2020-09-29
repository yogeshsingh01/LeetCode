int sumOddLengthSubarrays(int* arr, int arrSize){
    
    int sum = 0;
    
    for(int i=1; i <= arrSize; i = i+2)
    {
        int j = 0;
        while(j < arrSize)
        {
            int k = j;
            if((k+i) <= arrSize)
            {   
                while(k<(i+j))
                sum += arr[k++];
            }
            j++;
        }
    }
    return sum;
}

int main()
{
    int array[] = {1,4,2,5,3};
    sumOddLengthSubarrays(array, 5);
}