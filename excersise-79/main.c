
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter array size: ");
    int arraySize;
    scanf("%d", &arraySize);
    int *anyArr = malloc(arraySize * sizeof(int));
    int *arr2 = malloc(arraySize * sizeof(int));

    for (int i = 0; i < arraySize; i++) {
        printf("Enter element %d of arr1: ", i + 1);
        scanf("%d", &anyArr[i]);
    }

    for (int i = 0; i < arraySize; i++) {
        printf("Enter element %d of arr2: ", i + 1);
        scanf("%d", &arr2[i]);
    }

    for (int i = 0; i < arraySize; i++) {
        if (anyArr[i] != arr2[i]) {
            printf("Arrays are not equal\n");
            free(anyArr);
            free(arr2);
            return 0;
        }
    }

    printf("Arrays are equal\n");
    free(anyArr);
    free(arr2);
    return 0;
}
    