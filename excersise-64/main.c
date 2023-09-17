
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int* arr = (int*) malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Enter the value of the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The result is: ");

    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }

    free(arr);
    return 0;
}
    