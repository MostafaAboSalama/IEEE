#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int index=-1;
    char str1[60];
    printf("Enter string1 : ");
    gets(str1);
    char ch;
    printf("Enter character to search : ");
    scanf("%c",&ch);
    for(int i=0;i<strlen(str1);i++)
       {
          if(str1[i]==ch)
          {
             printf("found at index %d\n",i);
          }
       }
    return 0;
}
