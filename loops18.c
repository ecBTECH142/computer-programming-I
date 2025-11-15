#include <stdio.h>

int main() {
    int boys = 0, girls = 0;
    int total_students = 50;
    char gender;
    for(int i = 0; i < total_students; i++) {
        printf("Enter gender of student %d (M/F): ", i + 1);
        scanf(" %c", &gender);  
     if(gender == 'M' || gender == 'm') 
        boys++;
     else if(gender == 'F' || gender == 'f')
        girls++;
     else
        printf("Invalid input. Please enter M or F.\n");
    }

        printf("\nTotal Boys: %d\n", boys);
    printf("Total Girls: %d\n", girls);
     return 0;
}