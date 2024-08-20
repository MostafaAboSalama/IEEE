#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,shift;
    int bits=sizeof(int)*8;
    shift= 1<< (bits-1);
    printf("Enter a number : ");
    scanf("%d",&n);
    if(n & shift)
        printf("MSB = 1");
    else
        printf("MSB = 0");
    return 0;
}
