

int numberOfSteps (int num){
    
    int steps = 0;
    
    while(num)
    {
        num = (num%2) ? num -1 : num / 2;       
        steps++;
    }
    
    return steps;
}