#include<stdio.h>
int main()
{
      int a=10,*p=20,**q=30;
      p=&a;
      q=&p;
       
      printf("Enter value of a :=%d\n ",p);
      printf("address of a :=%u\n ",&a);
      printf("Enter value of p :=%d\n",p);
      printf("address of p :=%u\n ",&*p);
      printf("Enter value of q:=%d\n",p);
      printf("address of q :=%u\n ",&q);
      return 0;
}