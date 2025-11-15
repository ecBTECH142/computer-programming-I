#include <stdio.h>

int innermost_loop_recursive(int i, int j, int k) {
    if (k > 2) {
        return 0;
    }
    printf("%d %d %d\n", i, j, k);
    return innermost_loop_recursive(i, j, k + 1);
}
int middle_loop_recursive(int i, int j) {
    if (j > 2) {
        return 0;
    }
    innermost_loop_recursive(i, j, 1);
    return middle_loop_recursive(i, j + 1);
}
int outermost_loop_recursive(int i) {
    if (i > 2) {
        return 0;
    }
    middle_loop_recursive(i, 1);
    return outermost_loop_recursive(i + 1);
}

int main() {
    outermost_loop_recursive(1);
    return 0;
}