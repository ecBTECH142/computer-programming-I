#include <stdio.h>

int main() {
    int arr[100]; 
    int size = 5; 
    int val_to_search, i;
    int found = 0; 
     printf("Enter initial size of array (max 100): ");
    scanf("%d", &size);
    printf("Initial array elements: ");
    for (i = 0; i < size; i++) {
        arr[i] = (i + 1) * 10;
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Enter the value to search: ");
    scanf("%d", &val_to_search);
    for (i = 0; i < size; i++) {
        if (arr[i] == val_to_search) {
            printf("Value %d found at index %d.\n", val_to_search, i);
            found = 1;
        }
    }
    if (found == 0) {
        printf("Value %d not found in the array.\n", val_to_search);
    }
    return 0;
}