#include <stdio.h>

int main() {
    int matrix[4][4];
    int flat_array[16];
    int i, j, temp;
    printf("Enter 16 elements for the 4x4 matrix:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            flat_array[i * 4 + j] = matrix[i][j];
        }
    }
    for (i = 0; i < 16 - 1; i++) {
        for (j = 0; j < 16 - i - 1; j++) {
            if (flat_array[j] > flat_array[j + 1]) {
                temp = flat_array[j];
                flat_array[j] = flat_array[j + 1];
                flat_array[j + 1] = temp;
            }
        }
    }
    printf("\nSorted elements in the single-dimension array:\n");
    for (i = 0; i < 16; i++) {
        printf("%d ", flat_array[i]);
    }
    printf("\n");
    return 0;
}