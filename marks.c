#include<stdio.h>
int main()
{
  float h,e,a,s;
  float total,percentage,marks;

  printf("enter number of marks :");
  printf("\nhindi :");
  scanf("%f",&h);
  printf("\nenglish :");
  scanf("%f",&e);
  printf("\n account :");
  scanf("%f",&a);
  printf("\n sp :");
  scanf("%f",&s);
 ;
  total = h+e+a+s;
  percentage=total/4;
  printf("\ntotal=%.2f",total);
  printf("\ntotal percentage is =%.2f",percentage); 
        
  if(h>=35 && e>=35 && a>=35 && s>=35)
     {
          printf("\nStudent is PASS\n");
     }
     else
          printf("\nStudent is FAIL");
  if(percentage>=75)       
  {
    printf("Garde A");
  }
  else if(60<=percentage && percentage<75)
  {
    printf("grade  B ");
  }
  else if(45<=percentage && percentage<60)
  {
    printf("grade C");
  }
  else if(35<=percentage && percentage<45)
  {
    printf("grade D");
  }
 return 0;
}
  

  
  
 



