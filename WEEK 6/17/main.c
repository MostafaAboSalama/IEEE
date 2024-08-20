#include <stdio.h>
#include <stdlib.h>
int Sum(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",Sum(n));
    return 0;
}

int Sum(int n)
{
    int sum=0;
    if(n==0)
        return;
    while(n>0)
    {
        sum+=n%10;
        n/=10;
        Sum(n);
    }
    return sum;
}
