#include<stdio.h>
int main()
{
   int a,b,c;
   printf("Enter value of  a:");
   scanf("%d",&a);
   printf("Enter value of  b:");
   scanf("%d",&b);
   printf("Enter value of  c:");
   scanf("%d",&c);
   if(a>b && a>c )
   {
     printf("a(%d)is largest number :",a);
   }
   else if(b>c)
   {
     printf("b(%d)is largest number :",b);
   } 
   else
   {
      printf("c(%d)is largest number :",c);
   }
   return 0;
} 
      