#include<stdio.h>
int main()
{
   int a[5],b[5],i;

   for(i=0;i<5;i++)
   { 
      printf("Enter value a: ");
      scanf("%d", &a[i]);
   }
      printf("\n");
   for(i=0;i<5;i++)
   {
 
      printf("Enter value b: ");
      scanf("%d", &b[i]);
   }
    
   
    for(i=0;i<5;i++)
    { 
       printf("\n %d + %d = %d  ",a[i],b[i],a[i]+b[i]);
    }
     printf("\n");
}    
 
    
   
   