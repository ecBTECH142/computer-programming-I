#include <stdio.h>

int sum_divisible_by_3(int n) {
    if (n < 1) {
        return 0;
    }

    int current_sum = sum_divisible_by_3(n - 1);
    if (n % 3 == 0) {
        return n + current_sum;
    } else {
        return current_sum;
    }
}

int main() {
    int end = 100;
    int sum = sum_divisible_by_3(end);
    printf("Sum of all integers from 1 to 100 divisible by 3 is: %d\n", sum);
    return 0;
}