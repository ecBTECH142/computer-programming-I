#include <stdio.h>

int main() {
    int a , b , c;
    int largest , smallest ;
    printf(" Enter three numbers :");       
    scanf("%d %d %d" , &a , &b , &c);
    if(a>=b && a>=c) {
        largest = a;
    } else if (b>=a && b>=c) {
        largest = b;
    } else {
        largest = c;
    }

    if(a<=b && a<=c) {
        smallest = a;
    } else if (b<=a && b<=c) {
        smallest = b;
    } else {
        smallest = c;
    }
    printf("%d is the largest number and %d is the smallest number \n", largest , smallest);
    return 0;
}