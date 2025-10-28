/*
Q12 (Conditional Statements)
Write a program to input an integer and check whether it is positive, negative or zero using nested if-else.
*/

#include <stdio.h>

int main(void) {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (num > 0)
        printf("The number is Positive.\n");
    else if (num == 0)
        printf("The number is Zero.\n");
    else
        printf("The number is Negative.\n");

    return 0;
}