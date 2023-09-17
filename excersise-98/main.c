
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int matrixMax(int** matrix, int rows, int cols) {
    int max = INT_MIN;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] > max) {
                max = matrix[i][j];
            }
        }
    }
    return max;
}

int main() {
    int rows;
    printf("Enter row count of matrix: ");
    scanf("%d", &rows);
    int cols;
    printf("Enter cols count of matrix: ");
    scanf("%d", &cols);
    int** matrix = malloc(sizeof(int*) * rows);
    for (int i = 0; i < rows; i++) {
        matrix[i] = malloc(sizeof(int) * cols);
        for (int j = 0; j < cols; j++) {
            printf("Enter element [%d][%d]: ", i, j);
            scanf("%d", &matrix[i][j]);
        }
    }

    printf("Max element is: %d", matrixMax(matrix, rows, cols));

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
    