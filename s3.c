#include<stdio.h>
int main()

{
   int a[5][5],i,j;
    for(i=0;i<3;i++)
{
			
    for(j=0;j<3;j++)
   {
        printf("Enter val of a[%d][%d] : ",i,j);
	scanf("%d",&a[i][j]);
} 
   printf("\n");
}
	
  for(i=0;i<3;i++)
{
 		  
for(j=0;j<3;j++)
{
 printf(" %d ",a[i][j]); 
}
printf("\n");
		} 
	
	int total = a[0][0]+a[1][1]+a[2][2];
	int total1 = a[0][1]+a[0][2]+a[1][2];
	int total2 = a[1][0]+a[2][1]+a[2][0];
	
	printf("\n digoal triangle total is : %d ",total );
	printf("\n uper triangle total is : %d ",total1);
	printf("\n lower triangle total is : %d ",total2 );
}