#include<stdio.h>
int main() {
    int gross_salary,allowances,deductions,net_salary;
    printf("enter the gross salary:");
    scanf("%d",&gross_salary);
    if(gross_salary>100000){
        allowances= 10*gross_salary/100;
        deductions= 3*gross_salary/100;
    
        printf("net_salary = %d\n",net_salary=gross_salary+allowances-deductions);
    }else if(gross_salary>5000){
        allowances= 7*gross_salary/100;
        deductions= 2*gross_salary/100;
    
        printf("net_salary = %d\n",net_salary=gross_salary+allowances-deductions);

    }



}