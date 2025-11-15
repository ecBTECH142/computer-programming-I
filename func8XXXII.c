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
int count_primes_in_range(int current_num, int end_range) {
    if (current_num > end_range) {
        return 0;
    }
    int current_count = count_primes_in_range(current_num + 1, end_range);
    if (is_prime_recursive(current_num, 2)) {
        return 1 + current_count;
    } else {
        return current_count;
    }
}

int main() {
    int start = 1;
    int end = 500;
    int total_count = count_primes_in_range(start, end);
    printf("Total number of prime numbers between 1 and 500 is: %d\n", total_count); 
    return 0;
}