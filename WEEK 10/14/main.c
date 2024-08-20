#include <stdio.h>
#include <stdlib.h>



int main() {
    char str1[100], str2[100];
    printf("Enter the first string: ");
    scanf("%s", str1);
    printf("Enter the second string: ");
    scanf("%s", str2);
    stringConcatenate(str1, str2);
    printf("new string: %s\n", str1);
    return 0;
}

void stringConcatenate(char *str1, char *str2) {
    while (*str1 != '\0') {
        str1++;
    }

    while (*str2 != '\0') {
        *str1 = *str2;
        str1++;
        str2++;
    }

    *str1 = '\0';
}
