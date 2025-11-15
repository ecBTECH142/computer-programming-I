#include <stdio.h>

int main() {
    int arr[100]; 
    int size = 6; 
    int val_to_delete, pos_to_delete = -1, i;
     printf("Enter initial size of array (max 100): ");
    scanf("%d", &size);
    printf("Initial array elements: ");
    for (i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the value to delete (first occurrence): ");
    scanf("%d", &val_to_delete);
    for (i = 0; i < size; i++) {
        if (arr[i] == val_to_delete) {
            pos_to_delete = i;
            break; 
        }
    }
    if (pos_to_delete == -1) {
        printf("Value %d not found in the array.\n", val_to_delete);
    } else {
        for (i = pos_to_delete + 1; i < size; i++) {
            arr[i - 1] = arr[i];
        }
        size--; 
        printf("Value %d deleted from position %d.\n", val_to_delete, pos_to_delete);
        printf("Array after deletion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }

    return 0;
}