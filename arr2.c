#include<stdio.h>
int main ()  {
    int array[10];
    int i;
    printf("Enter 10 integers:\n");
    for(int i=0; i<10; i++) {
        scanf("%d", &array[i]);
    }
    printf("You entered:\n");
        printf("%d %d %d", array[3], array[6], array[8]);
    return 0;
}