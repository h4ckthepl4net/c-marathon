
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter array size: ");
    int arraySize;
    scanf("%d", &arraySize);
    int *anyArr = malloc(arraySize * sizeof(int));

    int *ptr = anyArr;

    for (int i = 0; i < arraySize; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", ptr);
    }

    ptr = anyArr;

    for (int i = 0; i < arraySize; i++) {
        scanf("%d ", ptr + i);
    }

    free(anyArr);
    return 0;
}
    