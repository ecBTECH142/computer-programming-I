#include <stdio.h>

int main() {
    int i,n;
    printf("Enter a positive integer (n): ");   
    scanf("%d" , &n);
    int sum = 0;
    for(i=1 ; i<=n ; i++) {
        sum += i;
    }
     printf("Sum of first %d natural numbers is: %d\n", i, sum);
    return 0;
}