
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int* arr = (int*) malloc(size * sizeof(int));
    int min = INT_MAX;
    int minInd = 0;

    for (int i = 0; i < size; i++) {
        printf("Enter the value of the %d element: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] < min) {
            min = arr[i];
            minInd = i;
        }
    }
    printf("The minimum value index in the array is: %d\n", minInd);
    free(arr);
    return 0;
}
    