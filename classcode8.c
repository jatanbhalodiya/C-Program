#include<stdio.h>
int main(){
    int n, i;
    printf("enter the value of n:");
    scanf("%d", &n);

     int sum=0;
    for(i = 1; i <= n; i++) {
        sum += (2 * i - 1 );
    }
   printf("Sum of first %d odd numbers = %d\n", n, sum);

    return 0;

}
