/**
 * Given an integer n and an integer start.
 *
 * Define an array nums where nums[i] = start + 2*i (0-indexed) and n == nums.length.
 *
 * Return the bitwise XOR of all elements of nums. 
****************************************************/
int xorOperation(int n, int start){
    
    int xor = 0;
    for(int i=0; i<n; i++)
    {
        xor = xor ^ (start + (i<<1));
    }
    return xor;
}