

char * restoreString(char * s, int* indices, int indicesSize){
    
    char * shuffleString = (char *)malloc(sizeof(char)*indicesSize+1);
    
    for(int i = 0; i<indicesSize; i++)
    {
        shuffleString[indices[i]] = s[i];
    }
    shuffleString[indicesSize] = '\0';
    return shuffleString;

}