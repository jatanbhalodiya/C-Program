#include<stdio.h>
int main() {
    int gross_sales,discount,net_sales;
    printf("enter the gross sales:");
    scanf("%d",&gross_sales);
    if(gross_sales>200000){
        discount=15*gross_sales/100;
    
        printf("net sales = %d\n",net_sales=gross_sales-discount);
    }else if(gross_sales>10000){
        discount=10*gross_sales/100;
    
        printf("net sales = %d\n",net_sales=gross_sales - discount);

    }else {
        discount=5*gross_sales/100;
    
        printf("net sales = %d\n",net_sales=gross_sales - discount);
        
    }

return 0;

}
