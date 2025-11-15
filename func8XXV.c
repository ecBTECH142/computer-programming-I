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
    long long original_num, reversed_num;
    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n < 0) {
        printf("Please enter a non-negative integer.\n");
        return 1;
    }
    original_num = n;
    reversed_num = reverse_digits_helper(n, 0);
    printf("Original number: %d\n", n);
    printf("Reversed number: %lld\n", reversed_num);
    if (original_num == reversed_num) {
        printf("The number IS a palindrome.\n");
    } else {
        printf("The number IS NOT a palindrome.\n");
    }
    return 0;
}