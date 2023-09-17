
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 

int main() {
    printf("Enter array size: ");
    int arraySize;
    scanf("%d", &arraySize);
    int *anyArr = malloc(arraySize * sizeof(int));
    int *newArr = malloc(arraySize * sizeof(int));
    int newArraySize = 0;

    for (int i = 0; i < arraySize; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &anyArr[i]);
        if (anyArr[i] & 1) {
            newArr[newArraySize] = anyArr[i];
            newArraySize++;
        }
    }

    for (int i = 0; i < newArraySize; i++) {
        printf("%d ", newArr[i]);
    }

    free(anyArr);
    free(newArr);
    return 0;
}
    