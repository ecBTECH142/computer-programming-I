#include <stdio.h>

int main() {
    int rows,cols;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);
    int a[rows][cols], b[rows][cols], multiplication[rows][cols];
    int i, j,k;

    printf("Enter elements of first 3x3 matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second 3x3 matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++) {
            multiplication[i][j] = 0;
            for(k=0; k<cols; k++) {
                multiplication[i][j] += a[i][k] * b[k][j];
            }
        }
          

    printf("Multiplication of the matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", multiplication[i][j]);
        printf("\n");
    }

    return 0;
}
