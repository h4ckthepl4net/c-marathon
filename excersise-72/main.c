
#include <stdio.h>

#define arraySize 5

int main() {
    int anyArr[arraySize] = {5, 4, 3, 2, 1};
    int* ptr = anyArr;
    for (int i = 0; i < arraySize; i++) {
        printf("%d ", *ptr);
        ptr++;
    }
    return 0;
}
    