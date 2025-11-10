#include <stdio.h>

int main() {
    int a, b, c;

    printf("Enter first value: ");
    scanf("%d", &a);

    printf("Enter second value: ");
    scanf("%d", &b);

    // Swapping with c variable
    c = a;
    a = b;
    b = c;

    printf("After swapping:\n");
    printf("First value = %d\n", a);
    printf("Second value = %d\n", b);

    return 0;
}
