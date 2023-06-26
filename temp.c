#include<stdio.h>
int main()
{
   int a,b;
   printf("Enter value of a :");
   scanf("%d",&a);
   printf("\nEnter value of b :");
   scanf("%d",&b);
   printf("\nbefore swap a=%d,b=%d",a,b);
   int temp=a;
       a=b;
       b=temp;
    printf("\nafter swap a=%d,b=%d",a,b);
    return 0;
}
   