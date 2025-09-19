#include <stdio.h>

int main() {
    int arr[200];
    int positiveCount = 0, negativeCount = 0, zeroCount = 0;

    printf("Enter 200 integers:\n");
    for (int i = 0; i < 200; i++) {
        scanf("%d", &arr[i]);

        if (arr[i] > 0) {
            positiveCount++;
        } else if (arr[i] < 0) {
            negativeCount++;
        } else {
            zeroCount++;
        }
    }

    printf("\nPositive values: %d\n", positiveCount);
    printf("Negative values: %d\n", negativeCount);
    printf("Zero values: %d\n", zeroCount);

    return 0;
}
