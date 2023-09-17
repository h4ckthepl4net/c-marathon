
#include <stdio.h>
#include <stdlib.h>

void matrixSwapGeneralAndSecondary(int** matrix, int size) {
    for (int i = 0; i < size; i++) {
        int tmp = matrix[i][i];
        matrix[i][i] = matrix[i][size - i - 1];
        matrix[i][size - i - 1] = tmp;
    }
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

    matrixSwapGeneralAndSecondary(matrix, size);

    for (int i = 0; i < size; i++) {
        printf("[%d] ", i);
        for(int j = 0; j < size; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }

    for (int i = 0; i < size; i++) {
        free(matrix[i]);
    }
    free(matrix);
    return 0;
}
    