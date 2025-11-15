#include <stdio.h>

int main() {
    int amount, i;
    int denominations[] = {500, 200, 100, 50, 20, 10, 5, 2, 1};
    int count[9] = {0}; 

    printf("Enter the amount: ");
    scanf("%d", &amount);

    for (i = 0; i < 9; i++) {
        if (amount >= denominations[i]) {
            count[i] = amount / denominations[i];
            amount = amount % denominations[i];
        }
    }

    printf("The number of notes required:\n");
    for (i = 0; i < 9; i++) {
        if (count[i] > 0) {
            printf("%d note(s) of Rs. %d\n", count[i], denominations[i]);
        }
    }

    return 0;
}
