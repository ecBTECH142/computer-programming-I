#include<stdio.h>
int main()
{
    int Principle = 100000;
    float Rate = 18;
    int Number = 4;
    float  Interest = (Principle*Rate*Number)/100;
    printf("The value of Interest is %f", Interest);
    return 0;
}
