#include <stdio.h>

int print_divisible_by_5(int n, int end_range) {
    if (n > end_range) {
        return 1;
    }
    
    if (n % 5 == 0) {
        printf("%d ", n);
    }
    return print_divisible_by_5(n + 1, end_range);
}

int main() {
    int start = 1;
    int end = 100;
    printf("Integers from 1 to 100 divisible by 5:\n");
    print_divisible_by_5(start, end);
    printf("\n");  
    return 0;
}