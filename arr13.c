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

    printf("Enter the value to insert: ");
    scanf("%d", &val);
    printf("Enter the position (0 to %d) to insert at: ", size);
    scanf("%d", &pos);
    if (size >= 100) {
        printf("Array is full, cannot insert.\n");
    } else if (pos < 0 || pos > size) {
        printf("Invalid position for insertion.\n");
    } else {
        for (i = size - 1; i >= pos; i--) {
            arr[i + 1] = arr[i];
        }
        arr[pos] = val;
        size++;
        printf("Array after insertion:\n");
        for (i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
    }
    return 0;
}