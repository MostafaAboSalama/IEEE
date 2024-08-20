#include <stdio.h>
#include <stdlib.h>


int main()
{
    float salary, gross, da, hra;
    printf("Enter basic salary of an employee: ");
    scanf("%f", &salary);
    if(salary <= 10000)
    {
        da  = salary * 0.8;
        hra = salary * 0.2;
    }
    else if(salary <= 20000)
    {
        da  = salary * 0.9;
        hra = salary * 0.25;
    }
    else
    {
        da  = salary * 0.95;
        hra = salary * 0.3;
    }
    gross = salary + hra + da;
    printf("Gross = %f", gross);
    return 0;
}
