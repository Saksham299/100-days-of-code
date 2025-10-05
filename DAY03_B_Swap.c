/*
Q6 (User Inputs, Operations & Output)
Write a program to swap two numbers using a third variable.
Sample:
Input: 3 5
Output: After swap: 5 3
*/

#include <stdio.h>

int main(void) {
    double a, b;
    printf("Enter two numbers separated by space: ");
    if (scanf("%lf %lf", &a, &b) != 2) {
        printf("Invalid input\n");
        return 1;
    }

    double temp = a;
    a = b;
    b = temp;

    printf("After swap: %.2f %.2f\n", a, b);
    return 0;
}