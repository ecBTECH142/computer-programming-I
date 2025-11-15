#include <stdio.h>

int print_name_n(int n, char name[]) {
    if (n < 1) {
        return 1;
    }
    print_name_n(n - 1, name);
    printf("%d: %s\n", n, name);
    return 1;
}

int main() {
    int n;
    char my_name[] = "Virat Kohli";
    printf("Enter the number of times (N) to print the name: ");
    scanf("%d", &n);
    if (n > 0) {
        printf("Printing name %d times:\n", n);
        print_name_n(n, my_name);
    } else {
        printf("N must be a positive integer.\n");
    }
    return 0;
}