#include <stdio.h>

int main() {
    int source[5] = {10, 20, 30, 40, 50};
    int target[10] = {0}; 
    int i, j = 0;

    for(i = 0; i < 5; i++) {
        if(i == 2) continue; 
        target[j] = source[i];
        j++;
    }

    printf("Target array:\n");
    for(i = 0; i < 10; i++)
        printf("%d ", target[i]);

    return 0;
}
