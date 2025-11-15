#include <stdio.h>

int main() {
    int num;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    printf("Seperated digits: \n");
    while(num > 0) {
        int digit = num % 10;
        printf("%d,", digit);
        num /= 10;
    }
    return 0;
}