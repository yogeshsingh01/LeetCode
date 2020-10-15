

void reverseString(char* s, int sSize){
    char *lastPtr = s+sSize-1;
    while(s < lastPtr)
    {
        char temp = *s;
        *s++ = *lastPtr;
        *lastPtr-- = temp;   
    }

}