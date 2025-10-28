// Q43 (Loops without Arrays/Strings)
// Write a program to check if a number is a strong number.

#include <stdio.h>

int main() {
    int num, temp, digit, fact, i, sum = 0;

    // Input number
    printf("Enter a number: ");
    scanf("%d", &num);

    temp = num;

    // Calculate sum of factorial of digits
    while (temp > 0) {
        digit = temp % 10;
        fact = 1;

        for (i = 1; i <= digit; i++)
            fact *= i;

        sum += fact;
        temp /= 10;
    }

    // Check for Strong number
    if (sum == num)
        printf("%d is a Strong number.\n", num);
    else
        printf("%d is not a Strong number.\n", num);

    return 0;
}

