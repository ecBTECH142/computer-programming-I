#include <stdio.h>  

int main() {
    int i, n, sum = 0;  
    float mean;
    
    printf("Input the n numbers :");  
    scanf("%d", &n);

    for (i = 1; i<=n; i++) {  
        printf("Number-%d :", i);  

        scanf("%d", &n);  
        sum += n; 
    }
    mean = sum /n;  
    printf("The sum of n no is : %d\nThe Mean is : %f\n", sum, mean);  
}