#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n>0)
    {
        printf("%d ",n--);
    }
    return 0;
}
