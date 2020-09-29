/**
 * Implement function ToLowerCase() that has a string parameter str, 
 * and returns the same string in lowercase.
 * ****************************************************************/
char * toLowerCase(char * str){
    
    char * bckup = str;
    while(*str != '\0')
    {
        if(*str >= 'A' && *str <= 'Z')
        {
            *str = *str - ('A'-'a');
        }
        str++;
    }
    return bckup;
}