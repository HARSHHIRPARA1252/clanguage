#include<stdio.h>
int main() 
{
    char i='a',j;
    do {
        printf("%c-%c",i,i-32);
        i++;
    } 
    while(i<='z');
    return 0;
}
