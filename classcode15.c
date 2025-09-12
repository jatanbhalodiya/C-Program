#include <stdio.h>

int main() {
    int n;
    float sum = 0.0, mean;


    printf("Enter the number of values: ");
    scanf("%d", &n);


    float values[n];


    printf("Enter %d values: \n", n);
    for (int i = 0; i < n; i++) {
        printf("Value %d: ", i + 1);
        scanf("%f", &values[i]);
        sum += values[i];
    }


    mean = sum / n;


    printf("\nSum of the values: %.2f\n", sum);
    printf("Mean of the values: %.2f\n", mean);

    return 0;
}

