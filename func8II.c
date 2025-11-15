#include <stdio.h>

int print_odd(int n) {
    if (n < 1) {
        return 1;
    }
    print_odd(n - 1);
    printf("%d ", 2 * n - 1);
    return 1;
}

int main() {
    printf("1st 10 odd numbers:\n");
    print_odd(10);
    printf("\n");
    return 0;
}