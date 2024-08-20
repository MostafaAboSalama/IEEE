#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n;
    int res=1;
    printf("Enter a number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        res*=(n%10);
        n/=10;
    }
    printf("result = %d",res);
    return 0;
}
