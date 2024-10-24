#include <stdio.h>
#include <stdlib.h>

typedef struct {
    int degree;
    double *coefficients; // Array to hold coefficients
} Polynomial;

// Function to create a polynomial
Polynomial createPolynomial(int degree, double *coeffs) {
    Polynomial p;
    p.degree = degree;
    p.coefficients = (double *)malloc((degree + 1) * sizeof(double));
    if (p.coefficients == NULL) {
        fprintf(stderr, "Memory allocation failed\n");
        exit(1);
    }
    for (int i = 0; i <= degree; i++) {
        p.coefficients[i] = coeffs[i];
    }
    return p;
}

// Function to print a polynomial
void printPolynomial(Polynomial p) {
    for (int i = p.degree; i >= 0; i--) {
        if (i != p.degree && p.coefficients[i] >= 0) {
            printf(" + ");
        }
        printf("%.2fx^%d", p.coefficients[i], i);
    }
    printf("\n");
}

// Function to free the memory allocated for a polynomial
void freePolynomial(Polynomial p) {
    free(p.coefficients);
}

int main() {
    // Example polynomial: 3x^2 + 2x + 1
    double coeffs[] = {1, 2, 3};
    Polynomial p = createPolynomial(2, coeffs);

    printPolynomial(p);

    freePolynomial(p);

    return 0;
}

