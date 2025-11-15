#include <stdio.h>
#include <string.h>

struct student_data {
    int rollno;
    char name[50];
    int physics;
    int maths;
    int chemistry;
    int total;
};

int main() {
    struct student_data s1;  
    printf("Enter Roll No: ");
    scanf("%d", &s1.rollno);
    getchar(); 
    printf("Enter Name: ");
    fgets(s1.name, sizeof(s1.name), stdin);
    s1.name[strcspn(s1.name, "\n")] = '\0'; 
    printf("Enter marks in Physics: ");
    scanf("%d", &s1.physics);
    printf("Enter marks in Maths: ");
    scanf("%d", &s1.maths);
    printf("Enter marks in Chemistry: ");
    scanf("%d", &s1.chemistry);
    s1.total = s1.physics + s1.maths + s1.chemistry;
    printf("\n--- Student Information ---\n");
    printf("Roll No   : %d\n", s1.rollno);
    printf("Name      : %s\n", s1.name);
    printf("Physics   : %d\n", s1.physics);
    printf("Maths     : %d\n", s1.maths);
    printf("Chemistry : %d\n", s1.chemistry);
    printf("Total     : %d\n", s1.total);
    return 0;
}
