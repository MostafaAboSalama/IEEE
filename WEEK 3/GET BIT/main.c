#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,b,f;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("Enter a bit : ");
    scanf("%d",&b);
    f = 1 & (n >> b);
    printf("The %d bit = %d",b,f);

    return 0;
}
