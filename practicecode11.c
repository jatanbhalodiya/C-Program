#include<stdio.h>
int main() {
    float grams,kg;
    printf("enter grams\n");
    scanf("%f", &grams);
    kg=grams/1000;
    printf("%f grams= %f kg \n",grams,kg);
    return 0;
}