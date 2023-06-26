#include<stdio.h>
int main()
{
   int n,i=1;
   printf("Enter value  n :");
   scanf("%d",&n);
   while(i<=n)
   {
      printf("%d",i*2);
      i++;
   }
   return 0;
}