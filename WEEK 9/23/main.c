#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void RemoveChar(char* ptr,int i,int size);
int main()
{
    int index=-1;
    char str1[60];
    printf("Enter string1 : ");
    gets(str1);
    char ch;
    printf("Enter character to delete : ");
    scanf("%c",&ch);
    for(int i=strlen(str1);i>=0;i--)
       {
          if(str1[i]==ch)
          {
             RemoveChar(str1,i,strlen(str1));
             break;
          }
       }
    printf("%s",str1);
    return 0;
}

void RemoveChar(char* ptr,int i,int size)
{
    for(int j=i;j<size;j++)
    {
        ptr[j]=ptr[j+1];
    }
}
