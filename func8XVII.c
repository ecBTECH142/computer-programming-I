#include <stdio.h>

int count_signs_recursive(int count, int *pos_ptr, int *neg_ptr, int *zero_ptr) {
    if (count < 1) {
        return 1;
    }

    int current_val;
    printf("Enter value #%d: ", count);
    scanf("%d", &current_val);
    count_signs_recursive(count - 1, pos_ptr, neg_ptr, zero_ptr);
    if (current_val > 0) {
        (*pos_ptr)++;
    } else if (current_val < 0) {
        (*neg_ptr)++;
    } else {
        (*zero_ptr)++;
    }
    
    return 1;
}

int main() {
    int n;
    int pos_count = 0;
    int neg_count = 0;
    int zero_count = 0;

    printf("Enter the number of values (N, e.g., 200): ");
    scanf("%d", &n);

    if (n > 0) {
        count_signs_recursive(n, &pos_count, &neg_count, &zero_count);
        printf("\nResults:\n");
        printf("Positive numbers: %d\n", pos_count);
        printf("Negative numbers: %d\n", neg_count);
        printf("Zeroes: %d\n", zero_count);
    } else {
        printf("N must be a positive integer.\n");
    }
    return 0;
}