#include<stdio.h>
int main()
{
    int a,b;
    printf("enter value number a:");
    scanf("%d",&a);
    printf("enter value number b:");
    scanf("%d",&b);
    printf("\n before swap a=%d,b=%d",a,b);
    int temp=a;
    a=b;
    b=temp;

    printf("\n after swap a=%d,b=%d",a,b);
    return 0;
}
   
