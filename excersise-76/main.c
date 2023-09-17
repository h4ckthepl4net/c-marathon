
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 

int main() {
    printf("Enter array size: ");
    int arraySize;
    scanf("%d", &arraySize);
    int *anyArr = malloc(arraySize * sizeof(int));

    for (int i = 0; i < arraySize; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &anyArr[i]);
    }

    for (int i = 0; i < arraySize; i++) {
        if (anyArr[i] % 2 == 0) {
            printf("%d ", anyArr[i]);
        }
    }

    free(anyArr);
    return 0;
}
    