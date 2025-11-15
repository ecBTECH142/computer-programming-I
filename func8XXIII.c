#include <stdio.h>

int sum_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return (n % 10) + sum_digits(n / 10);
}

int main() {
    int n;
    int sum;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    sum = sum_digits(n);
    printf("The sum of the digits of %d is: %d\n", n, sum);
    return 0;
}