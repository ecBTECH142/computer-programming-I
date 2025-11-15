#include <stdio.h>

int main() {
    int i,n;
    printf("Enter a positive integer (n): ");
    scanf("%d", &n);
     printf("The 1st n Natural numbers are : \n");
    for(i=1; i<=n; i++) {
        printf("%d \n" , i);
    }
    return 0;
}