
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int* arr = (int*) malloc(size * sizeof(int));
    int minInd = 0;
    int maxInd = 0;

    for (int i = 0; i < size; i++) {
        printf("Enter the value of the %d element: ", i + 1);
        scanf("%d", &arr[i]);
        if (arr[i] < arr[minInd]) {
            minInd = i;
        }
        if (arr[i] > arr[maxInd]) {
            maxInd = i;
        }
    }
    printf("The maximum - minimum value of the array is: %d\n", maxInd - minInd);
    free(arr);
    return 0;
}
    