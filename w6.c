#include<stdio.h>
int main()
{
   int  i,n;
   printf("Enter number :");
   scanf("%d",&n);
   i=2;
  do
{
   printf("%d",i);
   i=i+2;
}
while(i<=n);
return 0;
}
