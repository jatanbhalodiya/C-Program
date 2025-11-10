#include<stdio.h>
int main() {
    float net_salary ,gross_salary,allowance,deduction;
    printf("enter gross salary:");
    scanf("%f",&gross_salary);
    allowance= 10*gross_salary/100;
    deduction= 3*gross_salary/100;
    printf("net salary :%f \n",net_salary=gross_salary+allowance-deduction);
    return 0;
}