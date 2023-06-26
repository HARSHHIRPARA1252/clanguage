#include<stdio.h>
#include<conio.h>
int main()
{
  char i,j;
  
for(i=5;i>=1;i--)
  { 
     for(j=5;j>=i;j--)
     { 
        printf("%d",j+65);
     }
        printf("\n");

}

for(i=1;i<=5;i++)
     { 
       for(j=5;j>i;j--)
     {
        printf("%d",j+65);
      }
        printf("\n");
}
return 0;
}