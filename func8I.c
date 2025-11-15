#include <stdio.h>

int print_natural(int n) {
    if (n < 1) {
        return 1;
    }
    print_natural(n - 1);
    printf("%d ", n);
    return 1;
}

int main() {
    printf("1st 10 natural numbers:\n");
    print_natural(10);
    printf("\n");
    return 0;
}