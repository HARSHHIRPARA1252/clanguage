#include<stdio.h>
int main()
{
   int hours,minutes;
   printf("enter hours into minutes :");
   scanf("%d",&minutes);
   hours=60/minutes;
   printf("hours=%d",hours);
   minutes=minutes/60;
   return 0;
}
   