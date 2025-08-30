#include<stdio.h>
int main() {
    float dollars,rupees;
    printf("enter rupees\n");
    scanf("%f", &rupees);
    dollars=rupees/48;
    printf("%f dollars= %f rupees \n",dollars,rupees);
    return 0;
}
