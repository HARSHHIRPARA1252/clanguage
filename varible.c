#include<stdio.h>
int main()
{
  int x,y;
  printf("Enter value of  x : ");
  scanf("%d",&x);
  printf("Enter value of  y : ");
  scanf("%d",&y);

  if(x<=2000 || x>=3000)
  {
    printf("x print: %d ",x);
  }
  if(100<=y && y<=500)
  {
     printf(" y print : %d ",y);
  }
return 0;
}  