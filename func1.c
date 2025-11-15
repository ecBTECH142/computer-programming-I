#include <stdio.h>

long long power(int base, int exp) {
    long long result = 1;
    int i;
    for (i = 0; i < exp; i++) {
        result *= base;
    }
    return result;
}
int main() {
    int a, b;
    long long result;
    printf("Enter base (a): ");
    scanf("%d", &a);
    printf("Enter exponent (b): ");
    scanf("%d", &b);
    result = power(a, b);
    printf("%d raised to the power %d is: %lld\n", a, b, result);
    return 0;
}