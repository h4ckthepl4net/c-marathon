
#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

int matrixMinIndices(int** matrix, int rows, int cols) {
    int row = 0;
    int col = 0;
    int min = INT_MAX;
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (matrix[i][j] < min) {
                min = matrix[i][j];
                row = i;
                col = j;
            }
        }
    }
    printf("Min element is at: [%d][%d]", row, col);
    return min;
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

    matrixMinIndices(matrix, rows, cols);

    for (int i = 0; i < rows; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
    