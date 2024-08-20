#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b;
    printf("Enter the number : ");
    scanf("%d",&n);
    printf("Enter the bit : ");
    scanf("%d",&b);
    n^= (1 << b);
    printf("The new number = %d",n);
    return 0;
}
