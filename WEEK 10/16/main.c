#include <stdio.h>
#include <stdlib.h>


void stringReverse(char *str);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    stringReverse(str);
    printf("Reversed string: %s\n", str);
    return 0;
}

void stringReverse(char *str) {
    char *start = str;
    char *end = str;
    char temp;
    while (*end != '\0') {
        end++;
    }
    end--;

    while (start < end) {
        temp = *start;
        *start = *end;
        *end = temp;
        start++;
        end--;
    }
}
