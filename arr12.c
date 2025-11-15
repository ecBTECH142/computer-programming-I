#include <stdio.h>

int main() {
    int arr[100];
    int size;
    int val, i;
    printf("Enter initial size of array (max 100): ");
    scanf("%d", &size);
    printf("\n");
    printf("Enter the value to insert at the beginning: ");
    scanf("%d", &val);
    if (size >= 100) {
        printf("Array is full, cannot insert.\n");
    } else {
        for (i = size - 1; i >= 0; i--) {
            arr[i + 1] = arr[i];
        }
        arr[0] = val;
        size++; 
        printf("Array after insertion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}