#include <stdio.h>
#include <stdlib.h>

int main()
{
    int base,power;
    int res=1;
    printf("Enter a base : ");
    scanf("%d",&base);
    printf("Enter a power : ");
    scanf("%d",&power);
    for(int i=0;i<power;i++)
    {
        res*=base;
    }
    printf("result  = %d",res);
    return 0;
}
