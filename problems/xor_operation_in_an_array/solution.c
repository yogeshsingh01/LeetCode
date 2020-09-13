

int xorOperation(int n, int start){
    
    int xor = 0;
    for(int i=0; i<n; i++)
    {
        xor = xor ^ (start + (i<<1));
    }
    return xor;
}