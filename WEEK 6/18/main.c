#include <stdio.h>
#include <stdlib.h>
int factorial(int n);
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("%d",factorial(n));
    return 0;
}
 int factorial(int n)
 {
     if(n==1)
        return;
     return n*factorial(n-1);
 }
