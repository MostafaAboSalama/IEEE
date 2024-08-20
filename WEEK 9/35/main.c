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
    for(int i=0;i<strlen(str1);i++)
       {
          while(str1[i]==' ' && str1[i+1]==' ')
          {
              RemoveChar(str1,i,strlen(str1));
          }
       }
    RemoveChar(str1,0,strlen(str1));
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
