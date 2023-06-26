#include<stdio.h>
int harsh(int x)
{
 int y=0;
 while(x!=0)
    {
       y=y*10+x%10;
       x/=10;
    }
       return 0;
    }
 int main()
{
   int x,n,y=0;
   printf("enter number :");
   scanf("%d",&x);
   n=harsh(x);
   printf("the revers number is %d",n);
   return y;
}