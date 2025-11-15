#include <stdio.h>

int print_even_n(int n) {
    if (n < 1) {
        return 1;
    }
    print_even_n(n - 1);
    printf("%d ", 2 * n);
    return 1;
}

int main() {
    int n;
    printf("Enter the number of terms (N): ");
    scanf("%d", &n);

    if (n > 0) {
        printf("1st %d even numbers:\n", n);
        print_even_n(n);
        printf("\n");
    } else {
        printf("N must be a positive integer.\n");
    }

    return 0;
}