#include <stdio.h>

// Day 01: Write a program to input two numbers and display their sum.
int main() {
    int a, b;
    printf("Enter two integers separated by space: ");
    if (scanf("%d %d", &a, &b) != 2) {
        printf("Invalid input. Please enter two integers.\n");
        return 1;
    }

    int sum = a + b;
    printf("Sum is: %d\n", sum);
    return 0;
}