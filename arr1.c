#include<stdio.h>
int main ()  {
    int array[5];
    int i;
    printf("Enter 5 integers:\n");
    for(int i=0; i<5; i++) {
        scanf("%d", &array[i]);
    }
    printf("You entered:\n");
    for(i = 0; i < 5; i++) {
        printf("%d ", array[i]);
    }
    return 0;
}