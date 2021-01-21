#include<time.h>
#include<stdio.h>

int main(){

 int n;
 time_t curr_time = time(NULL);

 scanf("%d",&n);

 time_t target_time = curr_time + 24*60*60*n;
 printf("%s",asctime(localtime(&target_time)));

 return 0;

}