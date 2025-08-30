#include<stdio.h>
int main() {
    float length,height;
    printf ("Enter length:");
    scanf("%f", &length);
    printf ("Enter height:");
    scanf("%f", &height);
    printf("area is :%f \n",length*height/2);
    return 0;
}