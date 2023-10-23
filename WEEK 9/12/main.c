#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int i;
    char str1[20];
    printf("Enter string1 : ");
    gets(str1);
    char str2[20];
    if(strlen(str1)%2 ==0)
    {
        printf("NOT Palindrome");
        return -1;
    }
    for(i=strlen(str1)-1;i>=0;i--)
        str2[strlen(str1)-i-1]=str1[i];
    if(strcmp(str1,str2))
        printf("NOT Palindrome");
    else
        printf("Palindrome");
    return 0;
}
