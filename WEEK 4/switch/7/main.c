#include <stdio.h>
#include <stdlib.h>

int main()
{
    float a,b,c,x1,x2,r,img;
    printf("Enter the constants : \n");
    printf("a = ");
    scanf("%f",&a);
    printf("b = ");
    scanf("%f",&b);
    printf("c = ");
    scanf("%f",&c);
    float d = (b*b - 4*a*c);
    switch(d > 0)
    {
    case 0:
        switch(d < 0)
        {
        case 0:
            x1 = x2 = -b/2*a;
            printf("x1 = x2 = %f ",x1);
            break;
        case 1:
            r = -b /2*a;
            img = (sqrt(-d))/2*a;
            printf("x1 = %f+i%f , x2 = %f-i%f ",r,img,r,img);
            break;
        }
    case 1:
        x1 = ((-b + sqrt(d))/(2*a));
        x2 = ((-b - sqrt(d))/(2*a));
        printf("x1 = %f , x2 = %f ",x1,x2);
        break;
    }
    return 0;
}
