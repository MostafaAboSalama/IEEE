#include <stdio.h>
#include <stdlib.h>

int main()
{
    int num1,num2,option,sum,sub,mul,div,mod;
    printf("Enter the first number : ");
    scanf("%d",&num1);
    printf("Enter the second number : ");
    scanf("%d",&num2);
   sum=num1+num2;
   sub=num1-num2;
   mul=num1*num2;
   div=num1/num2;
   mod=num1%num2;
printf("1-Sum = %d\n ",sum);
printf("2-Sub = %d\n ",sub);
printf("3-mul = %d\n ",mul);
printf("4-div = %d\n ",div);
printf("5-mod = %d\n ",mod);

}
