#include<stdio.h>
int main() {
    float net_sales,gross_sales,discount;
    printf("enter gross sales:");
    scanf("%f",&gross_sales);
    discount =10*gross_sales/100; 
    printf("net sales :%f \n",net_sales=gross_sales-discount);
    return 0;
}