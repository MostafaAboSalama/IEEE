#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,a2,a3;
    printf("Enter 3 lengths : \n");
    scanf("%d %d %d",& a1, &a2 ,&a3);
    if((a1 == a2) && (a2 == a3))
        printf("is equilateral");
    else if((a1 == a2 ) || (a1 == a3) || (a3 == a2))
        printf("is Isosceles");
    else
        printf("is Scalene");
    return 0;
}
