

void reverseString(char* s, int sSize){
    char temp;
    char *lastPtr = s+sSize-1;
    while(s < lastPtr)
    {
        temp = *s;
        *s++ = *lastPtr;
        *lastPtr-- = temp;   
    }

}