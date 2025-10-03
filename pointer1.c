#include <stdio.h>

#define ROWS 3
#define COLS 3

void matrixAdd(int (*mat1)[COLS], int (*mat2)[COLS], int (*result)[COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] + mat2[i][j];
        }
    }
}

void matrixSubtract(int (*mat1)[COLS], int (*mat2)[COLS], int (*result)[COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = mat1[i][j] - mat2[i][j];
        }
    }
}

void matrixMultiply(int (*mat1)[COLS], int (*mat2)[COLS], int (*result)[COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            result[i][j] = 0;
            for (int k = 0; k < cols; k++) {
                result[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}

void inputMatrix(int (*matrix)[COLS], int rows, int cols) {
    printf("Enter the elements of the matrix:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("Element [%d][%d]: ", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int (*matrix)[COLS], int rows, int cols) {
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int mat1[ROWS][COLS], mat2[ROWS][COLS], result[ROWS][COLS];

    printf("Enter the elements of the first matrix:\n");
    inputMatrix(mat1, ROWS, COLS);

    printf("\nEnter the elements of the second matrix:\n");
    inputMatrix(mat2, ROWS, COLS);

    matrixAdd(mat1, mat2, result, ROWS, COLS);
    printf("\nMatrix Addition Result:\n");
    printMatrix(result, ROWS, COLS);

    matrixSubtract(mat1, mat2, result, ROWS, COLS);
    printf("\nMatrix Subtraction Result:\n");
    printMatrix(result, ROWS, COLS);

    matrixMultiply(mat1, mat2, result, ROWS, COLS);
    printf("\nMatrix Multiplication Result:\n");
    printMatrix(result, ROWS, COLS);

    return 0;
}

