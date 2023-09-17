
#include <stdio.h>
#include <stdlib.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int* arr = (int*) malloc(size * sizeof(int));

    for (int i = 0; i < size; i++) {
        printf("Enter the value of the %d element: ", i + 1);
        scanf("%d", &arr[i]);
    }

    printf("The array is: ");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    free(arr);
    return 0;
}
    