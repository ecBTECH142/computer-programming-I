#include <stdio.h>

int sum_natural_n(int n) {
    if (n <= 0) {
        return 0;
    }
    return n + sum_natural_n(n - 1);
}

int main() {
    int n;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    if (n > 0) {
        int sum = sum_natural_n(n);
        printf("Sum of 1st %d natural numbers: %d\n", n, sum);
    } else {
        printf("N must be a positive integer.\n");
    }

    return 0;
}