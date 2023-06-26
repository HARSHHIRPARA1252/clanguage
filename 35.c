#include<stdio.h>
int main()
{
  int k;
  printf("Enter k:");
  scanf("\n%d",&k);
  
  if(k%5==0)
  {
    printf("\n your number not divisible by 5 ");
  }
  else
  {
     printf("\n your number is divisible  by 5 "); 
  }
  if(k%3==0)
  {
    printf("\n your number not divisible by 3 ");
  }
  else
  {
     printf("\n your number is divisible  by 3 "); 
  }
   return 0;
}