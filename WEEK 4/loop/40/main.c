#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main()
{
    int n;
    int i=0;
    int decimal=0;
    printf("Enter a binary number : ");
    scanf("%d",&n);
     while(n!=0)
    {
        if(n%10 ==1)
            decimal+=pow(2,i);
        i++;
        n/=10;
    }
    printf("%d",decimal);
    return 0;
}
