#include <stdio.h>

int main() {
    int subject1 , subject2, subject3;
    printf("Enter marks of three subjects: ");
    scanf("%d %d %d", &subject1 , &subject2 , &subject3);
    float average = (subject1 + subject2 + subject3) / 3.0;
    if(average >= 70){
        printf("Distinction");
    }
    else if(average >= 60){
        printf("First Class");
    }
    else if(average >= 50){
        printf("Second Class");
    }
    else if(average >= 35){
        printf("Pass");
    }
    else{
        printf("Fail");
    }    
    return 0;
}