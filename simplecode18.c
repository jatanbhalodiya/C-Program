#include<stdio.h>
int main() {
    float length,breadth;
    printf ("Enter length:");
    scanf("%f", &length);
    printf ("Enter breadth:");
    scanf("%f", &breadth);
    printf("area is :%f \n",length*breadth);
    printf("perimeter is :%f \n", 2*(length+breadth));
    return 0;
}