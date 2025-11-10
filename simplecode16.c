#include<stdio.h>
int main(){
    float I,P,R,N;
    printf("enter the value P:");
    scanf("%f",&P);
    printf("enter the value R:");
     scanf("%f",&R);
    printf("enter the value N:");
    scanf("%f",&N);
    I=P*R*N/100;
    printf("%f I \n",I);

    return 0;

}