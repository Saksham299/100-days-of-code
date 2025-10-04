//Q2: Write a program to input two numbers and display their sum, difference, product, and quotient.

#include <stdio.h>

int main() {
    int num1, num2;
    int sum, diff, prod;
    float quot;

    printf("Enter first integer: ");
    scanf("%d", &num1);

    printf("Enter second integer: ");
    scanf("%d", &num2);

    sum = num1 + num2;
    diff = num1 - num2;
    prod = num1 * num2;

    printf("Sum of %d and %d is %d\n", num1, num2, sum);
    printf("Difference of %d and %d is %d\n", num1, num2, diff);
    printf("Product of %d and %d is %d\n", num1, num2, prod);

    if (num2 != 0) {
        quot = (float)num1 / num2;
        printf("Quotient of %d divided by %d is %.2f\n", num1, num2, quot);
    } else {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}