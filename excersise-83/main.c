
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter array size: ");
    int arraySize;
    scanf("%d", &arraySize);
    int *anyArr = malloc(arraySize * sizeof(int));

    int *ptr = anyArr;

    for (int i = 0; i < arraySize; i++) {
        int element;
        printf("Enter element %d: ", i + 1);
        scanf("%d", &element);
        if (element > 0) {
            if (element == 1) {
                *ptr = element;
                ptr++;
            }
            for (int j = 2; j < element; j++) {
                if (element % j == 0) {
                    *ptr = element;
                    ptr++;
                    break;
                }
            }
        }
    }

    for (int i = 0; i < ptr - anyArr; i++) {
        printf("%d ", *(ptr + i));
    }

    free(anyArr);
    return 0;
}
    