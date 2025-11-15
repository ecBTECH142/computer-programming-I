#include <stdio.h>

int main() {
    int a[10], i, last;
    for(i=0; i<10 ; i++ ) {
         printf("\n Enter 10 Elements :");
        scanf("%d", &a[i]);
    }
    printf("\n Original array is \n");
    for(i=0; i<10 ; i++ ) {
        printf("%d \n", a[i]);
}    
    last = a[9];
    for(i=8;i>=0;i--) {
        a[i+1]=a[i];
    }
       a[0] = last;
      printf("Shifted array is \n");
    for(i=0; i<10 ; i++ ) {
        printf("%d \n", a[i]);
    }
    return 0;
}