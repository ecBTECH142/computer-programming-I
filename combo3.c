#include <stdio.h>

int main() {
    int matrix[3][3];
    int i, j;
    int max_val, min_val;
    int *ptr;
    printf("Enter 9 elements for the 3x3 matrix:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    ptr = &matrix[0][0];
    max_val = *ptr;
    min_val = *ptr;
    for (i = 0; i < 9; i++) {
        if (*(ptr + i) > max_val) {
            max_val = *(ptr + i);
        }
        if (*(ptr + i) < min_val) {
            min_val = *(ptr + i);
        }
    }
    printf("\nLargest number in the matrix: %d\n", max_val);
    printf("Smallest number in the matrix: %d\n", min_val);
    return 0;
}