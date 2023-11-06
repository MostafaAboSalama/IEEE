#include <stdio.h>
#include <stdlib.h>

int* getEvenNumbers(int *arr, int size, int *evenCount);

void displayArray(int *arr, int size);

int main() {
    int arr[100], size;
    int evenCount;
    int *evenArr;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    evenArr = getEvenNumbers(&arr[0], size, &evenCount);
    printf("Even numbers: ");
    displayArray(evenArr, evenCount);
    return 0;
}

int* getEvenNumbers(int *arr, int size, int *evenCount) {
    int *evenArr = malloc(size * sizeof(int));
    *evenCount = 0;

    for (int i = 0; i < size; i++) {
        if (*(arr + i) % 2 == 0) {
            *(evenArr + *evenCount) = *(arr + i);
            (*evenCount)++;
        }
    }

    return evenArr;
}

void displayArray(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", *(arr + i));
    }
    printf("\n");
}
