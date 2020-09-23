

bool canConstruct(char * ransomNote, char * magazine){
    
    int len = strlen(ransomNote);

    int count = 0;
    char * maga = magazine;
    while(*ransomNote != '\0')
    {
        maga = magazine;
        while(*maga != '\0')
        {
            if(*ransomNote == *maga)
            {
                count++;
                *maga = '0';
                break;
            }
            maga++;
        }
        printf("%d",count);
        if(!count)
            break;
        ransomNote++;
    }
    
    if(len == count)
        return 1;
    else
        return 0;   

}