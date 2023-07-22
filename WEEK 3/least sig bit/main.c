#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n & 1)
        printf("LSB = 1");
    else
        printf("LSB = 0");
    return 0;
}
