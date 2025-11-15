#include <stdio.h>
#include <stdlib.h>

long long get_divisor(int n, long long divisor) {
    if (n == 0) {
        return divisor;
    }
    return get_divisor(n / 10, divisor * 10);
}
int is_automorphic(int n, long long square, long long divisor) {
    if ((square % divisor) == n) {
        return 1; 
    } else {
        return 0;
    }
}

int main() {
    int n;
    long long square;
    long long divisor;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    square = (long long)n * n;
    divisor = get_divisor(n, 1);
    printf("Number: %d, Square: %lld\n", n, square);
    if (is_automorphic(n, square, divisor)) {
        printf("%d IS an automorphic number.\n", n);
    } else {
        printf("%d IS NOT an automorphic number.\n", n);
    }
    return 0;
}