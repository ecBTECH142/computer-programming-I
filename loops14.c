#include <stdio.h>  

int main() {
    int i, n, sum = 0;  
    float mean;  
    printf("Input the 10 numbers : \n");  

    for (i = 1; i <= 10; i++) {  
        printf("Number-%d :", i);  

        scanf("%d", &n);  
        sum += n; 
    }
    mean = sum / 10.0;  
    printf("The sum of 10 no is : %d\nThe Mean is : %f\n", sum, mean);  
}