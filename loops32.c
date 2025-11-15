#include <stdio.h>

int main() {
    int i, j, isPrime, count = 0;
    for(i = 2; i <= 500; i++) {
        isPrime = 1;
        for(j = 2; j * j <= i; j++) {
            if(i % j == 0) {
                isPrime = 0;
                break;
            }
        }
        if(isPrime)
           count++;
    }
    printf("Number of prime numbers between 1  to 500 is: %d\n", count);
    return 0;
}
