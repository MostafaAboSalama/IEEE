#include <stdio.h>
#include <stdlib.h>

int main()
{
    float lCM;
    printf("Enter the length in CM : ");
    scanf("%f",&lCM);
    printf("In M = %f , In KM = %f",0.01*lCM , 0.000001*lCM );
    return 0;
}
