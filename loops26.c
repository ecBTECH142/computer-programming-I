#include <stdio.h>

int main() {
    int num, original, sum = 0;
    printf("Enter a number: ");
    scanf("%d", &num);
    original = num;

    while (num != 0) {
        int digit = num % 10;
        sum += digit * digit * digit;
        num /= 10;
    }

    if (sum == original)
        printf("Armstrong number.\n");
    else
        printf("Not an Armstrong number.\n");

    return 0;
}
