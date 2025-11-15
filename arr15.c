#include <stdio.h>

int main() {
    int arr[100]; 
    int size; 
    int deleted_val, i;
    
   printf("Enter initial size of array (max 100): ");
    scanf("%d", &size);
    for (i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }
    printf("\n");
    if (size <= 0) {
        printf("Array is empty, cannot delete.\n");
    } else {
        deleted_val = arr[0];
        for (i = 1; i < size; i++) {
            arr[i - 1] = arr[i];
        }
        size--; 
        printf("Deleted value: %d\n", deleted_val);
        printf("Array after deletion from the beginning:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}