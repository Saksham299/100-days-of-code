// Q30 (Loops without Arrays/Strings)
// Write a program to reverse a given number.

#include <stdio.h>

int main() {
    int num, reverse = 0, remainder;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Reverse the number
    while (num != 0) {
        remainder = num % 10;
        reverse = reverse * 10 + remainder;
        num /= 10;
    }

    printf("Reversed number = %d\n", reverse);

    return 0;
}
