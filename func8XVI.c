#include <stdio.h>

int find_min_max_recursive(int count, int *min_ptr, int *max_ptr) {
    if (count < 1) {
        return 1;
    }
    
    int current_val;
    printf("Enter value #%d: ", count);
    scanf("%d", &current_val);
    
    find_min_max_recursive(count - 1, min_ptr, max_ptr);
    if (*min_ptr == 0 && *max_ptr == 0 && count > 0) {
        *min_ptr = current_val;
        *max_ptr = current_val;
    }
    
    if (current_val < *min_ptr) {
        *min_ptr = current_val;
    }
    if (current_val > *max_ptr) {
        *max_ptr = current_val;
    }
    
    return 1;
}

int main() {
    int n;
    int min = 0, max = 0;
    printf("Enter the number of values (N, e.g., 100): ");
    scanf("%d", &n);
    if (n > 0) {
        find_min_max_recursive(n, &min, &max);
        printf("\nLargest number: %d\n", max);
        printf("Smallest number: %d\n", min);
    } else {
        printf("N must be a positive integer.\n");
    }

    return 0;
}