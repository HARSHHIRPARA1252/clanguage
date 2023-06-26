#include<stdio.h>
int main()
{
   char str[20];
   printf("Enter string :");
   gets(str);
   printf("Your string is :%s",str);
   int i=0;
   while(str[i]!='\0')  
   {
     i++;
   }
   printf("\n legnth is %d ",i);
}  