#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    if((n % 5 == 0) && (n % 11 == 0))
        printf("is divisible by 5 and 11");
    else
        printf("is not");
    return 0;
}
