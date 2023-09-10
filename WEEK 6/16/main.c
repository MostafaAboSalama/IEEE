#include <stdio.h>
#include <stdlib.h>
void isPalindrome(int n);
int reverse(int n);
int sum=0;
int main()
{
    int n;
    printf("Enter a number : ");
    scanf("%d",&n);
    isPalindrome(n);
    return 0;
}

int reverse(int n)
{
int rem;

  if(n)
  {
    rem=n%10;
    sum=sum*10+rem;
    reverse(n/10);
  }
  else
    return sum;
  return sum;
}

void isPalindrome(int n)
{
    if(reverse(n)==n)
        printf("Is a palindrome");
    else
        printf("Is not");
}
