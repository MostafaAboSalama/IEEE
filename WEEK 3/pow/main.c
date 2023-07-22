#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    float base ,power;
    printf("Enter the base and the power : \n");
    scanf("%f",&base);
    scanf("%f",&power);
    printf("The result = %f ",pow(base,power));
    return 0;
}
