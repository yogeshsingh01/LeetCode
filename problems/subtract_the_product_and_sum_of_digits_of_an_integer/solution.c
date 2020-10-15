

int subtractProductAndSum(int n){
    
    int sum = 0, product = 1;
    while(n)
    {
        int temp = n % 10;
        n =  n / 10;
        
        product *= temp;
        sum += temp;
    }
    
    return product - sum;

}