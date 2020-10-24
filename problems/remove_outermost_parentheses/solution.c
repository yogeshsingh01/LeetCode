

char * removeOuterParentheses(char * S){
    char * res = (char *)malloc(sizeof(char)*strlen(S));
    char *bckup = res;
    int opened = 0;
    while(*S != '\0') 
    {
        if (*S == '(' && opened++ > 0) *res++ = *S;
        else if (*S == ')' && opened-- > 1) *res++ = *S;
        S++;
    }
    *res = '\0';
    return bckup;
}