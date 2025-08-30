#include<stdio.h>
int main(){
    int n, i;
    printf("enter the value of n:");
    scanf("%d", &n);

    printf("The first %d odd natural numbers are:\n", n);
    for(i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1 );
    }
   
    return 0;

}