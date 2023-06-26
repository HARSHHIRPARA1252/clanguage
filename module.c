#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter value of a :");
   scanf("%d",&a);
   printf("Enter value of b :");
   scanf("%d",&b);
   if((a*b)%3)
     {
    printf("\n a  number is dividible by 3");
    
      }
      
  else
  {
     printf("\n a not dividible by 3");
  }
   if((a*b)%7)
     {
    printf("\n b  number is  dividible by 7");
    
      }
      
  else
  {
     printf("\n b not dividible by 7");
  }
   return 0;
}

    