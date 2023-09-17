
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int* arr = (int*) malloc(size * sizeof(int));
    int countEvens = 0;

    for (int i = 0; i < size; i++) {
        printf("Enter the value of the %d element: ", i + 1);
        scanf("%d", &arr[i]);
        if (!(arr[i] & 1)) {
            countEvens++;
        }
    }
    printf("There are %d even numbers in array\n", countEvens);
    free(arr);
    return 0;
}
