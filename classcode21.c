#include<stdio.h>
int main() {
int num;
printf("enter the number");
scanf("%d",&num);
while (num!=0)
{
int a=num%10;
printf("%d",a);
num=num/10;
if(num>0)
    printf(",");

}
return 0;
}
