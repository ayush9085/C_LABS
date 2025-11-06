#include <stdio.h> 
struct Complex {
    float real;
    float imag;
};

int readComp(struct Complex *c);
void disComp(struct Complex c);
struct Complex addComplex(struct Complex c1, struct Complex c2);
struct Complex subComplex(struct Complex c1, struct Complex c2);

// Function to read complex number
int readComp(struct Complex *c) {
    printf("Enter real and imaginary parts: ");
    return scanf("%f %f", &c->real, &c->imag);
}

// Function to display complex number
void disComp(struct Complex c) {
    if (c.imag >= 0)
        printf("Complex Number: %.2f + %.2fi\n", c.real, c.imag);
    else
        printf("Complex Number: %.2f - %.2fi\n", c.real, -c.imag);
}

// Function to add two complex numbers
struct Complex addComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real + c2.real;
    result.imag = c1.imag + c2.imag;
    return result;
}

// Function to subtract two complex numbers
struct Complex subComplex(struct Complex c1, struct Complex c2) {
    struct Complex result;
    result.real = c1.real - c2.real;
    result.imag = c1.imag - c2.imag;
    return result;
}

// Main function
int main() {
    struct Complex c1, c2, sum, diff;

    printf("Enter first complex number:\n");
    readComp(&c1);

    printf("Enter second complex number:\n");
    readComp(&c2);

    sum = addComplex(c1, c2);
    diff = subComplex(c1, c2);

    printf("\nFirst ");
    disComp(c1);

    printf("Second ");
    disComp(c2);

    printf("\nSum ");
    disComp(sum);

    printf("Difference ");
    disComp(diff);

    return 0;
}
