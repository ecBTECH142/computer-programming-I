#include <stdio.h>

int print_odd_n(int n) {
    if (n < 1) {
        return 1;
    }
    print_odd_n(n - 1);
    printf("%d ", 2 * n - 1);
    return 1;
}

int main() {
    int n;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    if (n > 0) {
        printf("1st %d odd numbers:\n", n);
        print_odd_n(n);
        printf("\n");
    } else {
        printf("N must be a positive integer.\n");
    }

    return 0;
}