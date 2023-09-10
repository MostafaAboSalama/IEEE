#include <stdio.h>
#include <stdlib.h>

int getMax(int n1,int n2);
int main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("%d is the max between %d and %d .",getMax(n1,n2),n1,n2);
    return 0;
}

int getMax(int n1,int n2)
{
    if(n1>n2)
        return n1;
    return n2;
}
