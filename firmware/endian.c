#include <stdio> 

int main() {
    int n = 256*256+2*256+3; // 00000000 00000001 00000010 00000011
    unsigned char *c;
    printf("n = %d\n", n);
    c = (unsigned char*) (void*) &n;
    printf("n is allocated at\n%11u\t%11u\t%11u\t%11u\n", c, c+1, c+2, c+3);
    printf("%11u\t", *c++);
    printf("%11u\t", *c++);
    printf("%11u\t", *c++);
    printf("%11u\n", *c++);
}

/*
執行的報表如下。

Intel	
n = 66051
n is allocated at
 3221223236      3221223237      3221223238      3221223239
          3                     2                     1                     0
Sun	
n = 66051
n is allocated at
 4026530332      4026530333      4026530334      4026530335
          0                     1                     2                     3
*/
