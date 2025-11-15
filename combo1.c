#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C_add[3][3], C_sub[3][3], C_mul[3][3];
    int i, j, k;
    printf("Enter elements of 3x3 Matrix A:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }
    printf("Enter elements of 3x3 Matrix B:\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            C_add[i][j] = A[i][j] + B[i][j];
            C_sub[i][j] = A[i][j] - B[i][j];
            C_mul[i][j] = 0;
            for (k = 0; k < 3; k++) {
                C_mul[i][j] += A[i][k] * B[k][j];
            }
        }
    }
    printf("\nResult of Matrix Addition (A + B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", C_add[i][j]);
        }
        printf("\n");
    }
    printf("\nResult of Matrix Subtraction (A - B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", C_sub[i][j]);
        }
        printf("\n");
    }
    printf("\nResult of Matrix Multiplication (A * B):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%d\t", C_mul[i][j]);
        }
        printf("\n");
    }
    return 0;
}