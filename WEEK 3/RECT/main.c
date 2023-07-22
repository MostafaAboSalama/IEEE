#include <stdio.h>
#include <stdlib.h>

int main()
{
    float l,w;
    printf("Enter the length and the width of the rect:\n ");
    scanf("%f",&l);
    scanf("%f",&w);
    printf("The perimeter = %f , The area = %f ",(l+w)*2 , l*w);
    return 0;
}
