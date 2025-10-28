// Q39 (Loops without Arrays/Strings)
// Write a program to find the product of odd digits of a number.

#include <stdio.h>

int main() {
    int num, digit;
    long long product = 1;
    int found = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    // Calculate product of odd digits
    while (num != 0) {
        digit = num % 10;
        if (digit % 2 != 0) {
            product *= digit;
            found = 1;
        }
        num /= 10;
    }

    if (found)
        printf("Product of odd digits = %lld\n", product);
    else
        printf("No odd digits found.\n");

    return 0;
}
