#include <stdio.h>

int main() {
     int i,n;
    printf("Enter a positive integer (n): ");   
    scanf("%d" , &n);
    int factorial = 1;
    for(i=1 ; i<=n; i++) {
        factorial = factorial*i;
    }
     printf("Factorial of %d is %d\n", n, factorial);
    return 0;
}