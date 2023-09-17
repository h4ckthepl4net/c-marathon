
#include <stdio.h>
#include <stdlib.h>

int main() {
    printf("Enter array size: ");
    int arraySize;
    scanf("%d", &arraySize);
    int *anyArr = malloc(arraySize * sizeof(int));

    for (int i = 0; i < arraySize; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &anyArr[i]);
    }

    int *ptr1 = anyArr;
    int *ptr2 = anyArr + arraySize - 1;

    for (int i = 0; i < arraySize; i++) {
        char isPtr1Even = *ptr1 % 2 == 0;
        char isPtr2Even = *ptr2 % 2 == 0;
        if (isPtr1Even) {
            ptr1++;
        }
        if (!isPtr2Even) {
            ptr2--;
        }
        if (!isPtr1Even && isPtr2Even) {
            int temp = *ptr1;
            *ptr1 = *ptr2;
            *ptr2 = temp;
        }
    }

    for (int i = 0; i < arraySize; i++) {
        printf("%d ", anyArr[i]);
    }

    free(anyArr);
    return 0;
}
    