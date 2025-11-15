#include <stdio.h>

int print_even(int n) {
    if (n < 1) {
        return 1;
    }
    print_even(n - 1);
    printf("%d ", 2 * n);
    return 1;
}

int main() {
    printf("1st 10 even numbers:\n");
    print_even(10);
    printf("\n");
    return 0;
}