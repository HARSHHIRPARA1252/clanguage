#include<stdio.h>
int main()
{
  int n,m;
  printf("Enter n:");
  scanf("\n%d",&n);
  printf("Enter m:");
  scanf("\n%d",&m);
  if(n<m)
  {
    printf("n(%d) less than....m(%d)",n,m);
  }
  else
  {
     printf("m(%d) less than....n(%d)",n,m);
  }
  return 0;
}
