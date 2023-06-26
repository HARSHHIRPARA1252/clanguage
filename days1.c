#include<stdio.h>

int main()
{

int days,years,weeks,extra;

printf("Enter numeber of days: "); 
scanf("%d",&days);

years  = (days / 365);

weeks = (days % 365) / 7 ; 

days  = (days % 365 % 7);


printf("years: %d\n", years);
printf("weeks: %d\n", weeks);
printf("days: %d", days);

return 0;
}