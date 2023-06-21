#include <stdio.h>

struct Complex {
    double real;
    double imag;
};


struct Complex readComplex() {
    struct Complex c;
    printf("Enter the real part: ");
    scanf("%lf", &c.real);
    printf("Enter the imaginary part: ");
    scanf("%lf", &c.imag);
    return c;
}

void writeComplex(struct Complex c) {
    printf("Complex number: %.2lf + %.2lfi\n", c.real, c.imag);
}

struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex sum;
    sum.real = c1.real + c2.real;
    sum.imag = c1.imag + c2.imag;
    return sum;
}

struct Complex multiplyComplex(struct Complex c1, struct Complex c2) {
    struct Complex product;
    product.real = c1.real * c2.real - c1.imag * c2.imag;
    product.imag = c1.real * c2.imag + c1.imag * c2.real;
    return product;
}

int main() {
    struct Complex c1, c2, sum, product;

    printf("Enter the first complex number:\n");
    c1 = readComplex();

    printf("\nEnter the second complex number:\n");
    c2 = readComplex();

    printf("\n");

    printf("First complex number:\n");
    writeComplex(c1);

    printf("Second complex number:\n");
    writeComplex(c2);

    printf("\n");

    sum = addComplex(c1, c2);
    printf("Sum of complex numbers:\n");
    writeComplex(sum);

    product = multiplyComplex(c1, c2);
    printf("Product of complex numbers:\n");
    writeComplex(product);

    return 0;
}