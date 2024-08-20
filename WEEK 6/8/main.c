#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int isArmstrong(int n);
void getArmstrong(int n1,int n2);

int main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("The Armstrong numbers between %d and %d are :\n",n1,n2);
    getArmstrong(n1,n2);
    return 0;
}

int isArmstrong(int n)
{
    int i=0;
    int count=0;
    int sum=0;
    int temp=n;
    int a[100];

     while(n!=0)
     {
         a[i++]=n%10;
         n/=10;
         count++;
     }
     for(int i=0;i<count;i++)
     {
         sum+=pow(a[i],count);
     }
     if(sum==temp)
         return 1;

     return 0;
}

void getArmstrong(int n1,int n2)
{
    printf("1\n");

    while(n1<=n2)
   {
       if(isArmstrong(n1) && n1>10)
         printf("%d\n",n1);
       n1++;
   }
}
