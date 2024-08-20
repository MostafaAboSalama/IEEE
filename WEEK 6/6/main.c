#include <stdio.h>
#include <stdlib.h>
int isPrime(int n);
void getPrime(int n1,int n2);

int main()
{
    int n1,n2;
    printf("Enter two numbers : ");
    scanf("%d %d",&n1,&n2);
    printf("The prime numbers between %d and %d are :\n",n1,n2);
    getPrime(n1,n2);
    return 0;
}

int isPrime(int n)
{
     for(int i=2;i<n/2;i++)
    {
        if(n%i ==0)
          return 0;
    }
    return 1;
}
void getPrime(int n1,int n2)
{
   while(n1<n2)
   {
       if(isPrime(n1))
         printf("%d\n",n1);
       n1++;
   }

}
