#include <stdio.h>

int main() {
    int a[10], i , freq=0 , key;
    printf("Enter 10 elements in array:\n");
    for(i=0; i<10 ; i++ ) {
        scanf("%d", &a[i]);
    }
    printf("Enter element to find frequency: ");
    scanf("%d", &key);
    for(i=0; i<10 ; i++ ) {
        if(a[i]==key)
            freq++;
    }
    printf("Frequency of %d is: %d\n", key, freq);
    return 0;
}