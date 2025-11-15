#include <stdio.h>

int sum_divisible_by_13(int n, int end_range) {
    if (n > end_range) {
        return 0;
    }

    int current_sum = sum_divisible_by_13(n + 1, end_range);
    if (n % 13 == 0) {
        return n + current_sum;
    } else {
        return current_sum;
    }
}

int main() {
    int start = 1;
    int end = 100;
    int sum = sum_divisible_by_13(start, end);
    printf("Sum of numbers divisible by 13 in the range 1 to 100 is: %d\n", sum);
    return 0;
}