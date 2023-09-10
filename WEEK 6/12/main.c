#include <stdio.h>
#include <stdlib.h>
void evenOdd(int n1,int n2);
int main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    evenOdd(n1,n2);
    return 0;
}

void evenOdd(int n1,int n2)
{
    if(n1>n2)
        return;
    if(n1%2==0)
        printf("%d is even.\n",n1);
    else
        printf("%d is odd.\n",n1);
    n1++;
    evenOdd(n1,n2);
}

