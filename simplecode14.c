#include<stdio.h>
int main(){
    float celcius,fahrenheit;
    printf("enter the value celcius:");
    scanf("%f",&celcius);
    fahrenheit=(9.0/5.0 * celcius)+32;
    printf("%f celcius = %f fahrenheit \n",celcius,fahrenheit);

    return 0;

}