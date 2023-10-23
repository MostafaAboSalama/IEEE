#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    char str1[20];
    char str2[20];
    printf("Enter string1 : ");
    gets(str1);
    printf("Enter string2 : ");
    gets(str2);
    if(strcmp(str1,str2))
        printf("not Equal");
    else
        printf("EQUAL");
    return 0;
}
