/*
Q17 (Conditional Statements)
Write a program to find the roots of a quadratic equation ax^2 + bx + c = 0 and categorize them
as two real & distinct, real & equal, or complex.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double a, b, c;
    printf("Enter coefficients a, b, c: ");
    if (scanf("%lf %lf %lf", &a, &b, &c) != 3) {
        printf("Invalid input\n");
        return 1;
    }

    if (a == 0) {
        printf("Not a quadratic equation (a must not be 0).\n");
        return 0;
    }

    double D = b*b - 4*a*c;
    if (D > 0) {
        double r1 = (-b + sqrt(D)) / (2*a);
        double r2 = (-b - sqrt(D)) / (2*a);
        printf("Roots are real and distinct: %.6g and %.6g\n", r1, r2);
    } else if (D == 0) {
        double r = -b / (2*a);
        printf("Roots are real and equal: %.6g\n", r);
    } else {
        double real = -b / (2*a);
        double imag = sqrt(-D) / (2*a);
        printf("Roots are complex: %.6g + %.6gi and %.6g - %.6gi\n", real, imag, real, imag);
    }

    return 0;
}