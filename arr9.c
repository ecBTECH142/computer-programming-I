#include <stdio.h>

int main() {
     int array[5];
     int i,tmp;
     printf("Enter 5 number to be reversed :");
    for(i=0; i<5 ; i++ ) {
        scanf("%d", &array[i]);
    }
     printf("Reversed array using for loop:\n");
      for(i=4; i>=0 ; i-- ) {
        printf("%d \n", array[i]);
    } 
    return 0;
}
    