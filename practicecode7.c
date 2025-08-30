# include<stdio.h>
int main() {
    int hours,minutes,remainingminutes;
    printf("enter minutes \n");
    scanf("%d", &minutes);
    hours = minutes/60;
    remainingminutes = minutes % 60;
    printf("%d minutes = %d hours and %d minute(s)\n", minutes,hours,remainingminutes);
    return 0;
}    