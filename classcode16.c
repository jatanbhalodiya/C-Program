#include <stdio.h>

int main() {
    int i, num;
    int largest, smallest;

    printf("Enter value 1: ");
    scanf("%d", &num);
    largest = num;
    smallest = num;

    for(i = 2; i <= 100; i++) {
        printf("Enter value %d: ", i);
        scanf("%d", &num);

        if(num > largest) {
            largest = num;
        }
        if(num < smallest) {
            smallest = num;
        }
    }

    printf("The largest value is: %d\n", largest);
    printf("The smallest value is: %d\n", smallest);

    return 0;
}

