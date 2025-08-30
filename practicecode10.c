#include <stdio.h>

int main() {
    float dollars, pounds;
    
    // 1 Dollar = 48 Rs, 1 Pound = 70 Rs
    float dollar_to_rs = 48.0;
    float pound_to_rs = 70.0;

    printf("Enter amount in Dollars: ");
    scanf("%f", &dollars);

    // Convert dollars to rupees, then rupees to pounds
    pounds = (dollars * dollar_to_rs) / pound_to_rs;

    printf("%f Dollars = %f Pounds\n", dollars, pounds);

    return 0;
}