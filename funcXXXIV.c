#include <stdio.h>

int fibonacci_series(int n, int a, int b) {
    if (n <= 0) {
        return 1;
    }
    printf("%d ", a);
    return fibonacci_series(n - 1, b, a + b);
}

int main() {
    int n;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);
    if (n > 0) {
        printf("Fibonacci Series up to %d terms:\n", n);
        fibonacci_series(n, 1, 1);
        printf("\n");
    } else {
        printf("N must be a positive integer.\n");
    }
    return 0;
}