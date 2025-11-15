#include <stdio.h>

int main() {
     int sum = 0;
    for(int i=1 ; i<=100 ; i++) {
        if(i%13 == 0) {
            sum += i;
            }
    }
    printf(" The sum of all nos. divisible by 13 in the range of 1 and 100is %d \n", sum);
    return 0;
}