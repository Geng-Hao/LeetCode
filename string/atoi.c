#include <stdio.h>

void itoa(int i, char b[]){
    char const digit[] = "0123456789";
    char* p = b;
    if(i<0){
        *p++ = '-';
        i *= -1;
    }
    int shifter = i;
    do{ //Move to where representation ends
        ++p;
        shifter = shifter/10;
    }while(shifter);
    *p = '\0';
    do{ //Move back, inserting digits as u go
        *(--p) = digit[i%10];
        i = i/10;
    }while(i);
    return;
}

int main ()
{
    int i;
    char buffer [33];
    printf ("Enter a number: ");
    scanf ("%d",&i);
    itoa (i,buffer);
    printf ("decimal: %s\n",buffer);
    return 0;
}