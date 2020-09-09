
/**
 * Problem :
 *
 * Given a string s and an integer array indices of the same length.
 *
 * The string s will be shuffled such that the character at the ith position
 *  moves to indices[i] in the shuffled string.
 * Return the shuffled string.
 ****************************************************************/

char * restoreString(char * s, int* indices, int indicesSize){
    
    char * shuffleString = (char *)malloc(sizeof(char)*indicesSize+1);    
    for(int i = 0; i<indicesSize; i++)
    {
        shuffleString[indices[i]] = s[i];
    }
    shuffleString[indicesSize] = '\0';
    return shuffleString;
}