#include <stdio.h>

int separate_digits(int n) {
    if (n < 10) {
        printf("%d", n);
        return 1;
    }
    printf("%d, ", n % 10);
    return separate_digits(n / 10);
}

int main() {
    int n;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("Digits separated (reversed order): ");
        separate_digits(n);
        printf("\n");
    } else {
        printf("Please enter a positive integer.\n");
    }
    return 0;
}