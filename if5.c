#include <stdio.h>

int main() {
    int grosssales;
    printf("Enter gross sales: "); 
    scanf("%d", &grosssales);
    if(grosssales>=10000){
        float discount = grosssales*0.15 ;
        float netsales = grosssales - discount ;
        printf("The net sales is %f", netsales);
    }
    else if(grosssales>20000 && grosssales<10000) {
         float discount = grosssales*0.1 ;
        float netsales = grosssales - discount ;
        printf("The net sales is %f", netsales);
    }
    else {
        float discount = grosssales*0.05 ;
        float netsales = grosssales - discount ;
        printf("The net sales is %f", netsales);
    }    
    return 0;
}