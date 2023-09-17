
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int* arr1 = (int*) malloc(size * sizeof(int));
    int* arr2 = (int*) malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Enter the value of the %d element of array1: ", i + 1);
        scanf("%d", &arr1[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("Enter the value of the %d element of array2: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < size; i++) {
        printf("The multiplication of the %d element of array1 and array2 is: %d\n", i + 1, arr1[i] * arr2[i]);
    }

    free(arr1);
    free(arr2);
    return 0;
}
    