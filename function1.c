#include <stdio.h>
#include<math.h>
double power(double a, int b) {
    double result = 1;

    if (b < 0) {
        a = 1 / a;
        b = -b;
    }

    for (int i = 1; i <= b; i++) {
        result *= a;
    }

    return result;
}

int main() {
    double a;
    int b;

    printf("Enter the base (a): ");
    scanf("%lf", &a);
    printf("Enter the exponent (b): ");
    scanf("%d", &b);

    printf("%.2f raised to the power of %d is: %.4f\n", a, b, power(a, b));

    return 0;
}

