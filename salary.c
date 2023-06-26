#include <stdio.h>
int main()
{
    float basic, gross, hra, da;
    printf("Enter basic salary of an employee: ");
    scanf("%f", &basic);
    if(basic <= 5000)
    {
        hra  = basic * 0.8; 
        da   = basic * 0.20;
    }
    else if(basic>=5000 && basic<=10000 )
    {
        hra  = basic * 0.12;
        da   = basic * 0.30;
    }
    else if(basic>=10000 && basic<=15000 )
    {
        hra = basic * 0.40;
        da  = basic * 0.15;
    }
    else if(basic>=15000)
    {
        hra = basic * 0.50;
        da  = basic * 0.20;
        
    }
    gross = basic + hra + da;
    printf("gross  salary of employee = %.2f", gross);
    return 0;
}
