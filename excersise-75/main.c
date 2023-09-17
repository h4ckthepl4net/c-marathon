
#include <stdio.h>
#include <stdlib.h>
#include <limits.h> 

int main() {
    printf("Enter array size: ");
    int arraySize;
    scanf("%d", &arraySize);
    int *anyArr = malloc(arraySize * sizeof(int));

    int maximum = INT_MIN;
    int secondMaximum = INT_MIN;
    int thirdMaximum = INT_MIN;

    for (int i = 0; i < arraySize; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &anyArr[i]);
        if (anyArr[i] > maximum) {
            thirdMaximum = secondMaximum;
            secondMaximum = maximum;
            maximum = anyArr[i];
        } else if (anyArr[i] > secondMaximum) {
            thirdMaximum = secondMaximum;
            secondMaximum = anyArr[i];
        } else if (anyArr[i] > thirdMaximum) {
            thirdMaximum = anyArr[i];
        }
    }
    printf("Maximum: %d\n", maximum);
    printf("Second maximum: %d\n", secondMaximum);
    printf("Third maximum: %d\n", thirdMaximum);
    free(anyArr);
    return 0;
}
    