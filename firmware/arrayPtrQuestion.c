/* Q: the value of *(a+1), (*p-1)? */

#include <stdio.h>

int main(){
 int a[5] = {1, 2, 3, 4, 5};
 int *p = (int*)(&a+1);

 printf("%d\n",*(a+1)); //2
 printf("%d\n",(*p-1)); //32766
 printf("%d",(*(p-1))); //5
}