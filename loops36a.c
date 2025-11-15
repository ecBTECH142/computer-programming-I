#include <stdio.h>

int main() {
    int i,j;
    int n;
    printf("enter the number of rows:");
    scanf("%d" , &n);
    
    for(i=1;i<=5;i++) {
       j=n+1-i;
           printf("%d %d\n" , i ,j);
        
    }
    return 0;
}