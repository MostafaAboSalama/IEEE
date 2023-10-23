#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main()
{
    int index=-1;
    char str1[60];
   printf("Enter string1 : ");
    gets(str1);
    int max=str1[0];
    for(int i=0;i<strlen(str1);i++)
       {
          if(max<str1[i])
            max=str1[i];
       }
    int* freq=(int*)calloc(max,sizeof(int));
    for(int i=0;i<strlen(str1);i++)
       {
          freq[str1[i]]++;
       }
    for(int i=0;i<strlen(str1);i++)
       {
          printf("%c = %d\n",str1[i],freq[str1[i]]);
       }
    return 0;
}
