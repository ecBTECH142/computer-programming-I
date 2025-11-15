#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fp;
    int roll;
    char name[50];
    char choice;

    fp = fopen("students.csv", "w");
    if (fp == NULL) {
        printf("Error opening file!\n");
        exit(1);
    }

    fprintf(fp, "RollNo,Name\n");

    do {
        printf("Enter Roll No: ");
        scanf("%d", &roll);
        printf("Enter Name: ");
        scanf("%s", name);
        fprintf(fp, "%d,%s\n", roll, name);
        printf("Do you want to add another record? (y/n): ");
        scanf(" %c", &choice);
    } while (choice == 'y' || choice == 'Y');
    fclose(fp);
    printf("Records saved successfully in students.csv\n");
    printf("You can now open students.csv directly in MS-Excel.\n");

    return 0;
}
