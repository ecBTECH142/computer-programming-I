#include <stdio.h>
#include <string.h>

struct student {
    int rollno;
    char name[50];
    char course[50];
    char major[50];
    char minor[50];
};
void printNames(struct student s[], int n) {
    printf("\nList of Students:\n");
    for (int i = 0; i < n; i++) {
        printf("Roll No: %d, Name: %s\n", s[i].rollno, s[i].name);
    }
}
void printStudentData(struct student s[], int n, int roll) {
    for (int i = 0; i < n; i++) {
        if (s[i].rollno == roll) {
            printf("\nDetails of Student with Roll No %d:\n", roll);
            printf("Name   : %s\n", s[i].name);
            printf("Course : %s\n", s[i].course);
            printf("Major  : %s\n", s[i].major);
            printf("Minor  : %s\n", s[i].minor);
        }
    }
    printf("\nStudent with Roll No %d not found.\n", roll);
}

int main() {
    struct student s[10];  
    int n, roll;
    printf("Enter number of students (max 10): ");
    scanf("%d", &n);
    for (int i = 0; i < n; i++) {
        printf("\nEnter details for student %d:\n", i + 1);
        printf("Roll No: ");
        scanf("%d", &s[i].rollno);
        getchar(); 
        printf("Name: ");
        fgets(s[i].name, sizeof(s[i].name), stdin);
        s[i].name[strcspn(s[i].name, "\n")] = '\0'; 
        printf("Course: ");
        fgets(s[i].course, sizeof(s[i].course), stdin);
        s[i].course[strcspn(s[i].course, "\n")] = '\0';
        printf("Major Subject: ");
        fgets(s[i].major, sizeof(s[i].major), stdin);
        s[i].major[strcspn(s[i].major, "\n")] = '\0';
        printf("Minor Subject: ");
        fgets(s[i].minor, sizeof(s[i].minor), stdin);
        s[i].minor[strcspn(s[i].minor, "\n")] = '\0';
    }
    printNames(s, n);
    printf("\nEnter roll number to search: ");
    scanf("%d", &roll);
    printStudentData(s, n, roll);
    return 0;
}
