#include <stdio.h>

int main() {
    int grosssalary = 70000;
    float allowance = 0.1 * grosssalary;
    float deductions = 0.03 * grosssalary;
    float netsalary = grosssalary + allowance - deductions;
    printf("Net Salary: %f\n", netsalary);  
    return 0;
}