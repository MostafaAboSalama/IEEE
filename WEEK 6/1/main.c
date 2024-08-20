#include <stdio.h>
#include <stdlib.h>

int findCube(int n);

int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    printf("The cube of %d = %d",n,findCube(n));
    return 0;
}

int findCube(int n)
{
    return n*n*n;
}
