#include <stdio.h>

int main() {  
    int grosssales = 100000;
    float discount = 0.1 * grosssales;
    float netsales = grosssales - discount;
    printf("Net sales: %f \n", netsales);
    return 0;
}