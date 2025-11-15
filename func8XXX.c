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
int find_primes_in_range(int current_num, int end_range) {
    if (current_num > end_range) {
        return 1;
    }
    if (is_prime_recursive(current_num, 2)) {
        printf("%d ", current_num);
    }  
    return find_primes_in_range(current_num + 1, end_range);
}

int main() {
    int start = 1;
    int end = 500; 
    printf("Prime numbers between 1 and 500:\n");
    find_primes_in_range(start, end);
    printf("\n");   
    return 0;
}