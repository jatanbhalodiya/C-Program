#include<stdio.h>
int main() {
    float side;
    printf ("Enter side:");
    scanf("%f", &side);
    printf("area is :%f \n",side*side);
    printf("perimeter is :%f \n", 4*side);
    return 0;
}
