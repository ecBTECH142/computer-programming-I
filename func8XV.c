#include <stdio.h>


int calculate_sum_n(int count) {
    if (count <= 0) {
        return 0;
    }

    int value;
    printf("Enter value #%d: ", count);
    scanf("%d", &value);
    return value + calculate_sum_n(count - 1);
}

int main() {
    int n;
    int total_sum;
    float mean;
    printf("Enter the number of values (N): ");
    scanf("%d", &n);
    if (n > 0) {
        total_sum = calculate_sum_n(n);
        mean = (float)total_sum / n;
        printf("\nTotal Sum: %d\n", total_sum);
        printf("Mean: %.2f\n", mean);
    } else {
        printf("N must be a positive integer.\n");
    }
    return 0;
}