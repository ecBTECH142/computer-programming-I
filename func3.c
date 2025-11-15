#include <stdio.h>

long long factorial(int n) {
    if (n < 0) {
        return -1; 
    }
    if (n == 0 || n == 1) {
        return 1;
    } else {
        return (long long)n * factorial(n - 1);
    }
}

int main() {
    int num;
    long long result;
    printf("Enter a non-negative integer: ");
    scanf("%d", &num);
    result = factorial(num);
    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %lld\n", num, result);
    }
    return 0;
}