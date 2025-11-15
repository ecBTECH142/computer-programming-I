#include <stdio.h>

int main() {
     int i, count;
     printf("Enter a positive integer: ");
     scanf("%d", &i) ; 
      if(i == 0) {
        count = 1;
      } 
      else {
       if(i<0) i = -i;
        while(i != 0) {
            i /= 10;
            count++;
        }
      }
      printf("Number of digits: %d\n", count);
    return 0;
}