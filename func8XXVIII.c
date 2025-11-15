#include <stdio.h>

int sum_half_factors(int n, int i) {
    if (i > n / 2) {
        return 0;
    }
    int current_sum = sum_half_factors(n, i + 1);
    if (n % i == 0) {
        return i + current_sum;
    } else {
        return current_sum;
    }
}

int main() {
    int n;
    int sum_of_divisors;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 1) {
        printf("%d is NOT a perfect number.\n", n);
        return 1;
    }
    sum_of_divisors = sum_half_factors(n, 1);
    printf("Sum of proper divisors of %d is: %d\n", n, sum_of_divisors);
    if (sum_of_divisors == n) {
        printf("%d IS a perfect number.\n", n); // e.g., 6 (1+2+3=6) [cite: 150]
    } else {
        printf("%d IS NOT a perfect number.\n", n);
    }
    return 0;
}

