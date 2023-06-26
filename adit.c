#include<stdio.h>
int main()
{
   int a,b,c,d;
   
   printf("Enter value of a :");
   scanf("%d",&a);
   printf("Enter value of b :");
   scanf("%d",&b);
   c=a+b;
   d=a*b;
   printf("\n multipication=%d",c);
   printf("\n addition=%d,d);
   if(d%c==0)
     {
    printf("\n %d  number is divisible by %d",d,c);
     }
  else
  {
     printf("\n %d not divisible by %d ",d,c);
  }
  if(d%c==0)
     {
    printf("\n %d  number is divisible by %d",d,c);
      }
  else
  {
     printf("\n %d not divisible by %d",d,c);
  }
   return 0;
}

    