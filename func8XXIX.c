#include <stdio.h>
#include <math.h>

int is_prime_recursive(int n, int i) {
    if (n <= 1) {
        return 0; 
    }
    if (i * i > n) {
        return 1; 
    }
    if (n % i == 0) {
        return 0; 
    }
    return is_prime_recursive(n, i + 1);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (is_prime_recursive(n, 2)) {
        printf("%d IS a prime number.\n", n);
    } else {
        printf("%d IS NOT a prime number.\n", n);
    }
    return 0;
}