/*
Q13 (Conditional Statements)
Write a program to input a year and check whether it is a leap year or not using conditional statements.

Year is a leap year if divisible by 4 but not 100, except if divisible by 400.
*/

#include <stdio.h>

int main(void) {
    int year;
    printf("Enter a year: ");
    if (scanf("%d", &year) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
        printf("%d is a Leap year.\n", year);
    else
        printf("%d is NOT a Leap year.\n", year);

    return 0;
}