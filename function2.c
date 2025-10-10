#include<stdio.h>
isleap(int year){
if(year % 400==0){
    printf("%d is a leap year ",year);
    }
    else if (year % 4==0 && year % 100!=0){
        printf("%d is a leap year",year);
    }
    else{
        printf("%d is not a leap year",year);
    }

}
void main (){
    int year;
    printf("ënter the value of year:");
    scanf("%d",&year);
    isleap(year);
}
