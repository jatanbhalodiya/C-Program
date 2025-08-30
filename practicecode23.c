#include<stdio.h>
int main() {
    float total_marks,average_marks,subject_1,subject_2,subject_3;
    printf("enter marks of subject 1:");
    scanf("%f",&subject_1);
    printf("enter marks of subject 2:");
    scanf("%f",&subject_2);
    printf("enter marks of subject 3:");
    scanf("%f",&subject_3);
    printf("total marks:%f \n",total_marks=subject_1+subject_2+subject_3);
    printf("average marks:%f \n",total_marks=(subject_1+subject_2+subject_3)/3);
    return 0;
}