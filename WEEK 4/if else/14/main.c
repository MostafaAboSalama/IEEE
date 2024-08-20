#include <stdio.h>
#include <stdlib.h>

int main()
{
    int a1,a2,a3;
    printf("Enter 3 angles : \n");
    scanf("%d %d %d",& a1, &a2 ,&a3);
    if(a1+a2+a3 == 180)
        printf("is valid");
    else
        printf("is not valid");
    return 0;
}
