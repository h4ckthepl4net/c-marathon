
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void sort(int *arr, int size) {
    for (int i = 0; i < size; i++) {
        int min = INT_MAX;
        int minIndex = 0;
        for (int j = i; j < size; j++) {
            if (arr[j] < min) {
                min = arr[j];
                minIndex = j;
            }
        }
        int temp = arr[i];
        arr[i] = arr[minIndex];
        arr[minIndex] = temp;
    }
}

int main() {
    printf("Enter array size: ");
    int arraySize;
    scanf("%d", &arraySize);
    int *anyArr = malloc(arraySize * sizeof(int));

    for (int i = 0; i < arraySize; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &anyArr[i]);
    }

    sort(anyArr, arraySize);

    for (int i = 0; i < arraySize; i++) {
        printf("%d ", anyArr[i]);
    }

    free(anyArr);
    return 0;
}
    