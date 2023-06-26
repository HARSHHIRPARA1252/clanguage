#include<stdio.h>                          //addd,standerd,input,outpot
int main()                                //intiger function
{   
  int a,b;                               //veribal
  printf("Enter value number a :");     //first value
  scanf("%d",&a);                      //percentage d scan
  printf("Enter value number b :");    //second    
  scanf("%d",&b);                          //scan b
  printf("\n before swap a=%d,b=%d",a,b);   //before swap
  int scop=a;                                // scop =a to a=sco
      a=b;                                   //a=b to b=a
      b=scop;                                //scop=a b=scop same valuess 
  printf("\n after swap a=%db=%d",a,b);  
  return 0;
}