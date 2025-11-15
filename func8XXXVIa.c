#include <stdio.h>

#define N 5

int recursive_loop(int i) {
    if (i > 5) {
        return 0;
    }
    int j = N + 1 - i;
    printf("%d %d\n", i, j);
    return recursive_loop(i + 1);
}

int main() {
    recursive_loop(1);
    return 0;
}