/*
Q11 (Conditional Statements)
Write a program to input an integer and check whether it is even or odd using if-else.
*/

#include <stdio.h>

int main(void) {
    int num;
    printf("Enter an integer: ");
    if (scanf("%d", &num) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    if (num % 2 == 0)
        printf("%d is Even.\n", num);
    else
        printf("%d is Odd.\n", num);

    return 0;
}