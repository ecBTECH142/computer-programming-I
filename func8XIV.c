#include <stdio.h>

int calculate_sum_10(int count) {
    if (count < 1) {
        return 0;
    }
    int value;
    printf("Enter value #%d: ", 11 - count);
    scanf("%d", &value);
    return value + calculate_sum_10(count - 1);
}

int main() {
    int n = 10;
    int total_sum;
    float mean;

    printf("Calculating sum and mean of 10 values:\n");
    total_sum = calculate_sum_10(n);
    
    mean = (float)total_sum / n;

    printf("\nTotal Sum: %d\n", total_sum);
    printf("Mean: %.2f\n", mean);

    return 0;
}