#include<stdio.h>
int main()
{
  float income,tax;
  printf("Enter income :");   
  scanf("%f",&income);
  
   
  //slab  1
  if(income<=2500)
    {
     tax=0.0;
     printf("\n income was 0-2500 than 0.0 tax %f ",tax);
    }
  // slab 2
  else if(income>2500 &&  income<=5000)
    {
      tax=(income-2500) * 0.1;
      printf("income was 2500-5000 than 0.1 tax %f :",tax);

    } 
  //slab 3
  else if(income>5000 &&  income<=10000)
    { 
      tax=2500*0.1+(income-5000) * 0.2;
      printf("income was 2500-5000 than 0.1 tax %f :",tax);
    } 
  // slab 4
  else
   { 
     tax=2500 * 0.1 + 5000 * 0.2+(income-10000)*0.3;
     printf("income was 2500-5000 than 0.1 tax %f :",tax);
   }
   printf("Tax to be paid: %.2f\n", tax);
return 0;
}

     