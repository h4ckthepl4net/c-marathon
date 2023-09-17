
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 

int main() {
    printf("Enter array size: ");
    int arraySize;
    scanf("%d", &arraySize);
    int *anyArr = malloc(arraySize * sizeof(int));

    int minimum = INT_MAX;
    int secondMinimum = INT_MAX;

    for (int i = 0; i < arraySize; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &anyArr[i]);
        if (anyArr[i] < minimum) {
            secondMinimum = minimum;
            minimum = anyArr[i];
        } else if (anyArr[i] < secondMinimum) {
            secondMinimum = anyArr[i];
        }
    }
    printf("Minimum: %d\n", minimum);
    printf("Second minimum: %d\n", secondMinimum);
    free(anyArr);
    return 0;
}
    