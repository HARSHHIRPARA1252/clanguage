#include<stdio.h>
int main()
{
  int year,week,days;
  printf("enter in days :");
  scanf("%d",&days);
  year=(365/days);
  week=(365%7)*week;
  days=((365 * year )+(365*week)*7);
  printf("year=%d",year);
  printf("week=%d\n",week);
  printf("days=%d\n",days);
  return 0;
}
  
   