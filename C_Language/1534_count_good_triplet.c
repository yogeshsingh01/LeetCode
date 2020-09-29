
/**
 * Given an array of integers arr, and three integers a, b and c. You need to find the number of good triplets.
 *
 * A triplet (arr[i], arr[j], arr[k]) is good if the following conditions are true:
 *
 *    0 <= i < j < k < arr.length
 *   |arr[i] - arr[j]| <= a
 *   |arr[j] - arr[k]| <= b
 *   |arr[i] - arr[k]| <= c
 *
 * Where |x| denotes the absolute value of x.
 *
 * Return the number of good triplets.
 ****************************************************************/
int countGoodTriplets(int* arr, int arrSize, int a, int b, int c){
    int count = 0;
    for(int i=0; i<arrSize; i++)
    {
         for(int j=i+1; j<arrSize; j++)
         {
             if((abs(arr[i]-arr[j])<=a))
             {
                for(int k=j+1; k<arrSize; k++)
                {
                    if((abs(arr[j]-arr[k])<=b) && (abs(arr[i]-arr[k])<=c))
                         count++;
                }
             }
         }
    }
    return count;

}