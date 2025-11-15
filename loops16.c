#include <stdio.h>
int main() {
    int num, largest, smallest;
    printf("Enter number 1: ");
    scanf("%d", &num);
    largest = smallest = num;
    for (int i = 2; i <= 100; i++) {
        printf("Enter number %d: ", i);
        scanf("%d", &num);
        if (num > largest)
            largest = num;
        if (num < smallest)
            smallest = num;
    }
    printf("\nLargest number is: %d\n", largest);
    printf("Smallest number is: %d\n", smallest);
    return 0;
}