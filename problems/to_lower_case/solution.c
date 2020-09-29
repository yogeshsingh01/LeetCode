

char * toLowerCase(char * str){
    
    char * bckup = str;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str | 0x20;
        }
        str++;
    }
    return bckup;
}