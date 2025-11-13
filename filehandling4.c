#include <stdio.h>

int main() {
    FILE *fp;
    int roll;
    char name[50];
    char choice;

    fp = fopen("students.csv", "w");  // .csv file opens directly in Excel
    if (fp == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    fprintf(fp, "Roll No,Name\n");  // header line for Excel

    do {
        printf("Enter Roll No: ");
        scanf("%d", &roll);
        printf("Enter Name: ");
        scanf("%s", name);

        fprintf(fp, "%d,%s\n", roll, name);  // write record to CSV

        printf("Do you want to enter another record? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');

    fclose(fp);
    printf("Data stored successfully in students.csv\n");
    printf("You can open this file directly in MS Excel.\n");
    return 0;
}
