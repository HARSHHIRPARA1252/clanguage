#include<stdio.h>
int fact(int n)
{
	if(n==0)
		return 0;
	else if(n==1)
		return 1;
	else
		return fact(n-1)+fact(n-2);
}
int main()
{
	int n,i;
	printf("enter n:");
	scanf("%d",&n);
	for(i=1;i<n;i++)
	printf("%d",fact(i));
}