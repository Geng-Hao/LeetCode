#include <stdio.h>
#include <stdlib.h>

int main()
{   
    int space = 0;
    for (int i = 9; i > 0 ; i -= 2){
        int k = space;
        if (i <= 7){
            while(k>0){
                printf(" ");
                k--;
            }
        }
        for (int j = i; j > 0; j--){
            printf("%d",i);
        }
        space++;
        printf("\n");
    }
    return 0;
}