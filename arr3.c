#include <stdio.h>

int main() {
    int a[5], i, j, temp;
    char order;

    printf("Enter 5 values:\n");
    for(i = 0; i < 5; i++) {
        scanf("%d", &a[i]);
    }
    printf("Sort in ascending (A) or descending (D) order? ");
    scanf(" %c", &order);
    for(i = 0; i < 4; i++) {
        for(j = i + 1; j < 5; j++) {
            if((order == 'A' && a[i] > a[j]) || (order == 'D' && a[i] < a[j])) {
                temp = a[i];
                a[i] = a[j];
                a[j] = temp;
            }
        }
    }
    printf("Sorted array:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", a[i]);
    }
    return 0;
}
