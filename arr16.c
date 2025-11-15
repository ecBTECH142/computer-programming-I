#include <stdio.h>

int main() {
    int arr[100]; 
    int size; 
    int pos, deleted_val, i;      
    printf("Enter initial size of array (max 100): ");
    scanf("%d", &size);
    printf("Initial array elements: ");
    for (i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the position (0 to %d) to delete from: ", size - 1);
    scanf("%d", &pos);
    if (size <= 0) {
        printf("Array is empty, cannot delete.\n");
    } else if (pos < 0 || pos >= size) {
        printf("Invalid position for deletion.\n");
    } else {
        deleted_val = arr[pos];
        for (i = pos + 1; i < size; i++) {
            arr[i - 1] = arr[i];
        }
        size--;
        printf("Deleted value: %d\n", deleted_val);
        printf("Array after deletion from position %d:\n", pos);
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}