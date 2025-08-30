#include <stdio.h>

int main() {
    int a, b, c;

    // Input three numbers
    printf("Enter three numbers: ");
    scanf("%d %d %d", &a, &b, &c);

    // Assume first number is largest and smallest
    int largest = a, smallest = a;

    // Compare for largest
    if(b > largest) largest = b;
    if(c > largest) largest = c;

    // Compare for smallest
    if(b < smallest) smallest = b;
    if(c < smallest) smallest = c;

    printf("Largest = %d\n", largest);
    printf("Smallest = %d\n", smallest);

    return 0;
}