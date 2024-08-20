#include <stdio.h>
#include <stdlib.h>

 void circle(float r);
#define pi 3.14159265359
int main()
{
    float r;
    printf("Enter the radius : ");
    scanf("%f",&r);
    circle(r);
    return 0;
}
 void circle(float r)
 {
     printf("The diameter = %f\n",2*r);
     printf("The circumference = %f\n",2*r*pi);
     printf("The area = %f\n",r*r*pi);
 }
