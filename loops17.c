#include <stdio.h>

int main() {
    int num;
    int positive = 0;
    int negative = 0;
    int zero = 0;
    for (int i = 0; i < 200; i++) {
        printf("Enter value %d: ", i + 1);
        scanf("%d", &num);

        if (num > 0)
            positive++;
        else if (num < 0)
            negative++;
        else
            zero++;
    }
    printf("\nTotal Positive numbers: %d\n", positive);
    printf("Total Negative numbers: %d\n", negative);
    printf("Total Zeroes: %d\n", zero);
    return 0;
}