#include <stdio.h>
#include <stdlib.h>

int main()
{
    float temp;
    printf("Enter the temperature in Celsius : ");
    scanf("%f",&temp);
    printf("The temperature in Fahernheit = %f", (temp* 9/5)+32);
    return 0;
}
