#include<stdio.h>
int main () // Fahrenheit to Celcius conversion //
{
 float Fahrenheit = 81.0;
 float Celcius = (5.0/9.0*Fahrenheit) - 32 ;
    printf("The value of %f Fahrenheit in celcius is %f celcius", Fahrenheit , Celcius);
    return 0;
}