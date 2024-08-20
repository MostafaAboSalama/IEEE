#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int count=0;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        n/=10;
        count ++;
    }
    printf("number of digits = %d",count);
    return 0;
}
