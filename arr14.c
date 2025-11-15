#include <stdio.h>

int main() {
    int arr[100];
    int size; 
    int val, pos, i;  
    printf("Enter initial size of array (max 100): ");
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the value to insert at the end: ");
    scanf("%d", &val);

    if (size >= 100) {
        printf("Array is full, cannot insert.\n");
    } else {
        arr[size] = val;
        size++; 
        printf("Array after insertion at the end:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}