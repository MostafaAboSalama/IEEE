#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i;
    char str1[20];
    printf("Enter string1 : ");
    gets(str1);
    for(i=strlen(str1)-1;i>=0;i--)
        printf("%c",str1[i]);
    return 0;
}
