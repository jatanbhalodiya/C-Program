#include<stdio.h>
int main() {
    float grams,kg;
    printf("enter kg\n");
    scanf("%f", &kg);
    grams=kg*1000;
    printf("%f grams= %f kg \n",grams,kg);
    return 0;
}