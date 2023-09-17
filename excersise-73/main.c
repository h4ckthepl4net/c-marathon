
#include <stdio.h>

#define arraySize 5

int main() {
    int anyArr[arraySize] = {5, 4, 3, 2, 1};
    int anyArr2[arraySize] = {6, 7, 8, 9, 10};
    int newArray[arraySize * 2];
    int* ptr = newArray;
    for (int i = 0; i < arraySize; i++) {
        *ptr = anyArr[i];
        ptr++;
        *ptr = anyArr2[i];
        ptr++;
    }
    for (int i = 0; i < arraySize * 2; i++) {
        printf("%d ", newArray[i]);
    }
    return 0;
}
    