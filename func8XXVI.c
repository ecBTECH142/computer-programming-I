#include <stdio.h>
#include <stdlib.h>

int power_recursive(int base, int exp) {
    if (exp == 0) {
        return 1;
    }
    return base * power_recursive(base, exp - 1);
}
int count_digits(int n) {
    if (n == 0) {
        return 0;
    }
    return 1 + count_digits(n / 10);
}

int check_armstrong_sum(int original_num, int temp_num, int order, int sum_so_far) {
    if (temp_num == 0) {
        return (sum_so_far == original_num);
    }
    int digit = temp_num % 10;
    sum_so_far += power_recursive(digit, order);
    return check_armstrong_sum(original_num, temp_num / 10, order, sum_so_far);
}

int main() {
    int n;
    int order;

    printf("Enter a positive integer: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Please enter a positive integer.\n");
        return 1;
    }
    order = count_digits(n);
    if (check_armstrong_sum(n, n, order, 0)) {
        printf("%d IS an Armstrong number.\n", n);
    } else {
        printf("%d IS NOT an Armstrong number.\n", n);
    }
    return 0;
}