#include <stdio.h>
#include <stdlib.h>
#define PI 3.14159265359
int main()
{
    double radius,diameter,circumference,area;
    printf("Enter the radius : ");
    scanf("%lf",&radius);
    diameter=2*radius;
    circumference=2*radius*PI;
    area=PI*radius*radius;
    printf("The diameter = %lf \n",diameter);
    printf("The circumference = %lf \n",circumference);
    printf("The area = %lf \n",area);
    return 0;
}
