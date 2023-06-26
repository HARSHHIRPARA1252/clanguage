#include<stdio.h>
int harsh(int x)
{
 int y=0;
 while(x!=0)
    {
       y=y*10+x%10;
       x/=10;
    }
       return y;
    }
 int main()
{
   int x,n;
   printf("enter number :");
   scanf("%d",&x);
   n=harsh(x);
   printf("the revers number is %d",n);
   return 0;
}