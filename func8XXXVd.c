#include <stdio.h>

int inner_loop_recursive(int i, int j) {
    if (j > 2) {
        return 0;
    }
    printf("%d %d\n", i, j);
    return inner_loop_recursive(i, j + 1);
}
int outer_loop_recursive(int i) {
    if (i < 3) {
        return 0;
    }
    inner_loop_recursive(i, 1);
    return outer_loop_recursive(i - 1);
}

int main() {
    outer_loop_recursive(5);
    return 0;
}