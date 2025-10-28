/*
Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time.
*/

#include <stdio.h>
#include <math.h>

int main(void) {
    double principal, rate, time, simple_interest, compound_interest;

    printf("Enter principal, rate (in %%), and time (in years): ");
    scanf("%lf %lf %lf", &principal, &rate, &time);

    simple_interest = (principal * rate * time) / 100;
    compound_interest = principal * (pow((1 + rate / 100), time) - 1);

    printf("Simple Interest = %.2f\n", simple_interest);
    printf("Compound Interest = %.2f\n", compound_interest);
    return 0;
}