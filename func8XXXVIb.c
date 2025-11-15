#include <stdio.h>

int recursive_loop(int i) {
    if (i > 3) {
        return 0;
    }
    int j = 6 - i;
    printf("%d %d\n", i, j);
    printf("%d %d\n", i, j);
    return recursive_loop(i + 1);
}

int main() {
    recursive_loop(1);
    return 0;
}