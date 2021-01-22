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



//求日期在一年中的第幾天

#include <stdio.h>
 
int main()
{
    int days = 0;
    int year, month, day;
    int day_tab[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    printf("輸入年、月、日，用空格隔開：");
    scanf("%d%d%d", &year, &month, &day);
    
    for (int i=1; i<month; i++)
    {
        days += day_tab[i];
    }
    
    days += day;

    if ((year%4==0 && year%100!=0 || year%400==0) && month>=3) //遇到閏年時
        days+=1; 

    printf("%d年%d月%d日是這一年的第%d天！\n", year, month, day, days);
    return 0;
}