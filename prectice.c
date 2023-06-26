#include<stdio.h>
int main()
{
  int a,b;
  printf("Enter value of a :");
  scanf("%d",&a);
  printf("Enter value of b :");
  scanf("%d",&b);
  printf("\n before swap a=%d,b=%d",a,b);
  int top=a;
      a=b;  
      b=a;
  printf("\n after swap a=%d,b=%d",a,b);
  return 0;
}
