
int strlen(char *s) {
    int size = 0;

    while(*s!='\0') { 
        size++;
        s++;
    }

    return size;
}


int strlen(const char* str )
{
　assert( str!= NULL ); 

　int len = 0;

　while( (*str++) != '\0' )
　{
　　len++;
　}

　return len;

}