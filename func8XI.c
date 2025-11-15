#include <stdio.h>

int print_name_5(int n, char name[]) {
    if (n < 1) {
        return 1;
    }
    print_name_5(n - 1, name);
    printf("%d: %s\n", n, name);
    return 1;
}

int main() {
    char my_name[] = "PDPU";
    printf("Printing name 5 times:\n");
    print_name_5(5, my_name);
    return 0;
}