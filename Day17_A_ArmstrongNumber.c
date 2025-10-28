// Q33 (Loops without Arrays/Strings)
// Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    int num, original, remainder, n = 0;
    float result = 0.0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    original = num;

    // Count digits
    while (original != 0) {
        original /= 10;
        n++;
    }

    original = num;

    // Compute sum of powers
    while (original != 0) {
        remainder = original % 10;
        result += pow(remainder, n);
        original /= 10;
    }

    // Check Armstrong
    if ((int)result == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}
