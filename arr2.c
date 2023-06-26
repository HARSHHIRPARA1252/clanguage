#include<stdio.h>
int main()
{
   int a[5],i,evensum=0,oddsum=0,totalsum=0;

   for(i=0;i<5;i++)
    { 
      printf("\nenter value a[%d]: ",i);
      scanf("%d",&a[i]);
    }
    for(i=0;i<5;i++)
     { 
      if(i%2==0)
      {
        evensum +=a[i];
      } 
     else  
      {
        oddsum +=a[i];
      }
     totalsum=evensum+oddsum;
    }
       printf("\nevensum=%d",evensum);
       printf("\noddsum=%d",oddsum);
       printf("\ntotalsum=%d",totalsum);
return 0;
}