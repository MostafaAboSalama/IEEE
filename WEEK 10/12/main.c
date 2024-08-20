
#include <stdio.h>
#include <stdlib.h>

stringLength(char *str);

int main() {
    char str[100];
    printf("Enter a string: ");
    scanf("%s", str);
    printf("Length of the string: %d\n", stringLength(str));
    return 0;
}

int stringLength(char *str) {
    int length = 0;
    while (*str != '\0') {
        length++;
        str++;
    }
    return length;
}
