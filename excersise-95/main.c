
#include <stdio.h>
#include <stdlib.h>

int matrixSumUnderGeneral(int** matrix, int size) {
    int sum = 0;
    for (int i = 0; i < size; i++) {
        for(int j = 0; j < i; j++) {
            sum += matrix[i][j];
        }
    }
    return sum;
}

int main() {
    int size;
    printf("Enter size of matrix: ");
    scanf("%d", &size);
    int** matrix = malloc(sizeof(int*) * size);
    for (int i = 0; i < size; i++) {
        matrix[i] = malloc(sizeof(int) * size);
        for (int j = 0; j < size; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }
    printf("Result is: %d", matrixSumUnderGeneral(matrix, size));

    for (int i = 0; i < size; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
    