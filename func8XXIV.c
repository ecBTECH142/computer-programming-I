#include <stdio.h>

long long reverse_digits_helper(int n, long long reversed) {
    if (n == 0) {
        return reversed;
    }
    reversed = reversed * 10 + (n % 10);
    return reverse_digits_helper(n / 10, reversed);
}

int main() {
    int n;
    long long reversed_num;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    reversed_num = reverse_digits_helper(n, 0);
    printf("The original number was: %d\n", n);
    printf("The reversed number is: %lld\n", reversed_num);
    return 0;
}