#include<stdio.h>
int main()
{
   int n,i,account[5],eng[5],hindi[5],total=0;
   float per;
 { 
   printf("Enter account marks %d: ");
   scanf("%d",account[i]);
   printf("Enter eng marks %d : ");
   scanf("%d",eng[i]);
   printf("Enter hindi marks %d : ");
   scanf("%d",hindi[i]);   
 }
     for(i=0;i<5;i++)
     {
       total=account[i]+eng[i]+hindi[i];
       per=total*100/300;
      }
       printf("account[%d] %d eng[%d] %d hindi[%d] %  d");  
     if(per>=35)
      {
         ("gread D :");
      } 
      else if(per>=50)      
      {
         ("gread C :");
      } 
       else if(per>=75)
      {
         ("gread B :");
      }  
       else   if(per>=80)
      {
         ("gread A :");
      } 
      else
      { 
       ("fail");
      }
  return 0;
}
       