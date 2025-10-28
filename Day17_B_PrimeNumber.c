// Q34 (Loops without Arrays/Strings)
// Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    int num, i, isPrime = 1;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    if (num <= 1) {
        printf("%d is not a Prime number.\n", num);
        return 0;
    }

    // Check for factors
    for (i = 2; i <= num / 2; i++) {
        if (num % i == 0) {
            isPrime = 0;
            break;
        }
    }

    if (isPrime)
        printf("%d is a Prime number.\n", num);
    else
        printf("%d is not a Prime number.\n", num);

    return 0;
}
