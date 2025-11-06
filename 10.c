#include <stdio.h>

int main() {
    float dollar = 768.5; // 1 dollar = 48 inr //
    float inr = 48*dollar;
    float pound = inr/70;
    printf("The value of %f dollar in pound is %f\n",dollar,pound);
    return 0;
}