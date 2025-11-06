#include <stdio.h>

int main() {
    int grosssalary;
    printf("Enter gross salary: "); 
    scanf("%d", &grosssalary);
    float allowance , deduction ;
    if(grosssalary>=10000){
        allowance = grosssalary*0.1 ;
        deduction = grosssalary*0.03 ;
        float netsalary = grosssalary + allowance - deduction ; 
        printf("The net salary is %f", netsalary);
    }
    if(grosssalary>5000 && grosssalary<10000) {
         allowance = grosssalary*0.07 ;
        deduction = grosssalary*0.02 ;
        float netsalary = grosssalary + allowance - deduction ; 
        printf("The net salary is %f", netsalary);
    }
    return 0;
}