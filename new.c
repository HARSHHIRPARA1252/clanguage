#include<stdio.h>
int main()
{
    int days,weeks,years;
    
    printf("enter days:");
    scanf("%d",&days);
   
    years=days/365;
    weeks=days % 365/7;
    days=days % 365%7;
   
   
    
printf("\n years=%d",years);    
printf("\n weeks=%d",weeks); 
printf("\n days=%d",days); 
    
 return 0;
}
    
    