#include <stdio.h>
#include <math.h>
int is_prime_recursive(int n, int i) {
    if (n <= 1) {
        return 0;
    }
    if (i * i > n) {
        return 1;
    }
    if (n % i == 0) {
        return 0;
    }
    return is_prime_recursive(n, i + 1);
}
int sum_primes_in_range(int current_num, int end_range) {
    if (current_num > end_range) {
        return 0;
    }
    int current_sum = sum_primes_in_range(current_num + 1, end_range);
    if (is_prime_recursive(current_num, 2)) {
        return current_num + current_sum;
    } else {
        return current_sum;
    }
}

int main() {
    int start = 1;
    int end = 500;
    int total_sum = sum_primes_in_range(start, end);
    printf("Summation of all prime numbers between 1 and 500 is: %d\n", total_sum);
    return 0;
}