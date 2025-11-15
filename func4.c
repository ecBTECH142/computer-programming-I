#include <stdio.h>

int swap_by_value(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("\nInside function (after swap):\n");
    printf("a = %d, b = %d\n", a, b);
    return 0;
}

int main() {
    int x = 10;
    int y = 20;
    printf("Before function call (in main):\n");
    printf("x = %d, y = %d\n", x, y);
    swap_by_value(x, y);
    printf("\nAfter function call (in main):\n");
    printf("x = %d, y = %d\n", x, y);
    printf("The original values (x, y) were not changed because the function only swapped copies.\n");
    return 0;
}