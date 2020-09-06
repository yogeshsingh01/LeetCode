

char * defangIPaddr(char * address){
    
    char *ipStrip = (char *)malloc(sizeof(char)*23);
    char *backup = ipStrip;
    while(*address != '\0')
    {
        if(*address == '.')
        {
            *ipStrip++ = '[';
            *ipStrip++ = *address;
            *ipStrip   = ']';
        }
        else
        {
            *ipStrip = *address;
        }
        
        ipStrip++;
        address++;
    }
    *ipStrip = '\0';
    return backup;
    
}