#include <stdio.h>

int main() {
    int i,n;
    printf("Enter a positive integer (n): ");   
    scanf("%d" , &n);
    int sum = 0;
    for(i=1 ; i<=n ; i++) {
        if(i % 2 == 0) {
        sum += i;
        }
    }
     printf("Sum of first n odd numbers is: %d\n", sum);
    return 0;
}
