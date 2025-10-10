#include<stdio.h>
int fact(int a) {
    if (a==0 || a==1){
        return 1;
    }
    return a*fact(a-1);
}
void main(){
    int a;
    printf("enter the value of a:");
    scanf("%d", &a);
    printf("%d",fact(a));
}
