#include<stdio.h>
int main(){
    int n, i;
    printf("enter the value of n:");
    scanf("%d", &n);

     int sum=0;
    for(i = 0; i <= n; i++) {
        sum += (2 * i  );
    }
   printf("Sum of first %d even numbers = %d\n", n, sum);

    return 0;

}
