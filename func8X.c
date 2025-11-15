#include <stdio.h>

long long calculate_factorial(int n) {
    if (n < 0) {
        return -1; 
    }
    if (n == 0 || n == 1) {
        return 1;
    }
    return (long long)n * calculate_factorial(n - 1);
}

int main() {
    int n;
    long long result;
    printf("Enter a non-negative integer (N): ");
    scanf("%d", &n);
    result = calculate_factorial(n);
    if (result == -1) {
        printf("Factorial is not defined for negative numbers.\n");
    } else {
        printf("Factorial of %d is: %lld\n", n, result);
    }
    return 0;
}