#include <stdio.h>

int count_digits(long long n) {
    if (n == 0) {
        return 0;
    }
    return 1 + count_digits(n / 10);
}

int main() {
    long long n;
    int count;
    
    printf("Enter a positive integer: ");
    scanf("%lld", &n);
    if (n == 0) {
        count = 1;
    } else if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    } else {
        count = count_digits(n);
    }
    printf("The number %lld has %d digits.\n", n, count);
    return 0;
}