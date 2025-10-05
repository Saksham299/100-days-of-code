/*
Q20 (Conditional Statements)
Write a program to display the day of the week based on a number (1-7) using switch-case.
*/

#include <stdio.h>

int main(void) {
    int n;
    printf("Enter a number (1-7): ");
    if (scanf("%d", &n) != 1) {
        printf("Invalid input\n");
        return 1;
    }

    switch (n) {
        case 1: printf("Sunday\n"); break;
        case 2: printf("Monday\n"); break;
        case 3: printf("Tuesday\n"); break;
        case 4: printf("Wednesday\n"); break;
        case 5: printf("Thursday\n"); break;
        case 6: printf("Friday\n"); break;
        case 7: printf("Saturday\n"); break;
        default: printf("Invalid number (must be 1-7)\n");
    }
    return 0;
}