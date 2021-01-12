#include <stdio.h>
#include <stdlib.h>

int main()
{
    int space;
    
    for(int i = 0; i<5; i++){
        
        space = abs(2-i);
        
        
        for(int j = space ;j>0;j--) printf(" ");
        
        
        for(int j = 5-space*2 ; j>0 ;j--) printf("*");
        
        printf("\n");
        
    }

    return 0;
}
