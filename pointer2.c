#include <stdio.h>

#define ROWS 4
#define COLS 4
#define SIZE (ROWS * COLS)

void inputMatrix(int matrix[ROWS][COLS]) {
    printf("Enter the elements of the 4x4 matrix:\n");
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("Element [%d][%d]: ", i + 1, j + 1);
            scanf("%d", &matrix[i][j]);
        }
    }
}

void printMatrix(int matrix[ROWS][COLS]) {
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            printf("%d ", matrix[i][j]);
        }
        printf("\n");
    }
}

void sortArray(int arr[], int size) {
    for (int i = 0; i < size - 1; i++) {
        for (int j = 0; j < size - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {

                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

void matrixToArray(int matrix[ROWS][COLS], int arr[SIZE]) {
    int index = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            arr[index++] = matrix[i][j];
        }
    }
}

void printArray(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int matrix[ROWS][COLS];
    int arr[SIZE];

    inputMatrix(matrix);

    matrixToArray(matrix, arr);

    printf("\nOriginal Matrix:\n");
    printMatrix(matrix);

    sortArray(arr, SIZE);

    printf("\nSorted Elements in the 1D Array:\n");
    printArray(arr, SIZE);

    int index = 0;
    for (int i = 0; i < ROWS; i++) {
        for (int j = 0; j < COLS; j++) {
            matrix[i][j] = arr[index++];
        }
    }

    printf("\nMatrix with Sorted Elements:\n");
    printMatrix(matrix);

    return 0;
}

