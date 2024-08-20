#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main()
{
    int i=0;
    char str1[20];
    printf("Enter string1 : ");
    gets(str1);
    while(str1[i])
    {
        if(str1[i]>='A' && str1[i]<='Z')
            str1[i]+=32;
        else if(str1[i]>='a' && str1[i]<='z')
            str1[i]-=32;
        i++;
    }
    printf("%s",str1);
    return 0;
}
