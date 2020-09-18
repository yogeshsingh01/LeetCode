

int balancedStringSplit(char * s){
    
    int numCur=0, numPre=0, noOfPattern=0, pathEnd=1;
    char cur=0, pre=*s;
    while(*s != '\0')
    {
        cur = *s++;
        
        if(cur!=pre)
        {
           pathEnd++;
        }
        
        pre = cur;

        
        if(pathEnd%2 ==0)
        {
            numCur++;
        }
        else
        {
            numPre++;
        }
        if(numCur == numPre) 
        {
            noOfPattern = (noOfPattern + 1);
            numCur = 0;
            numPre = 0;
            
        }
        
    } 
    return noOfPattern;
}