#include <stdio.h>

void printExponent(double value) {
    unsigned long long *ptr = (unsigned long long*)&value;
    unsigned long long exponent = (*ptr >> 52) & 0x7FF;
    
    printf("Exponent (Hex): 0x%llX\n", exponent);
    
    printf("Exponent (Binary): ");
    for (int i = 11; i >= 0; i--) {
        printf("%lld", (exponent >> i) & 1);
    }
    printf("\n");
}

int main() {
    double x = 0.7;
    printExponent(x);
    
    return 0;
}
