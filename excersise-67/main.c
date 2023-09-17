
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int main() {
    int size;
    printf("Enter the size of the array: ");
    scanf("%d", &size);
    int* arr = (int*) malloc(size * sizeof(int));
    int primesCount = 0;

    for (int i = 0; i < size; i++) {
        printf("Enter the value of the %d element: ", i + 1);
        scanf("%d", &arr[i]);
        int initial = arr[i];
        char isPrime = 1;
        while(arr[i] > 1) {
            if (initial % arr[i] == 0) {
                isPrime = 0;
                break;
            }
        }
        if (isPrime) {
            primesCount++;
        }
    }
    printf("There are %d prime numbers in array\n", primesCount);
    free(arr);
    return 0;
}
