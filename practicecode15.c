#include<stdio.h>
int main(){
    float celcius,fahrenheit;
    printf("enter the value fahrenheit:");
    scanf("%f",&fahrenheit);
    celcius= 5.0/9.0 * (fahrenheit-32);
    printf("%f celcius = %f fahrenheit \n",celcius,fahrenheit);

    return 0;

}