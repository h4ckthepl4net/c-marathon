
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int* arr = (int*) malloc(size * sizeof(int));
    int max = INT_MIN;

    for (int i = 0; i < size; i++) {
        printf("Enter the value of the %d element: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    printf("The maximum value of the array is: %d\n", max);
    free(arr);
    return 0;
}
    