#include <stdio.h>

int main() {
    int rows,cols;
    printf("Enter number of rows and columns of matrix: ");
    scanf("%d %d", &rows, &cols);
    int a[rows][cols], b[rows][cols], sum[rows][cols];
    int i, j;

    printf("Enter elements of first %dx%d matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &a[i][j]);

    printf("Enter elements of second %dx%d matrix:\n");
    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            scanf("%d", &b[i][j]);

    for(i = 0; i < rows; i++)
        for(j = 0; j < cols; j++)
            sum[i][j] = a[i][j] + b[i][j];

    printf("Sum of the matrices:\n");
    for(i = 0; i < rows; i++) {
        for(j = 0; j < cols; j++)
            printf("%d ", sum[i][j]);
        printf("\n");
    }

    return 0;
}
