// Q36 (Loops without Arrays/Strings)
// Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    int num1, num2, hcf;

    // Input two numbers
    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    // Find HCF using Euclidean algorithm
    int a = num1, b = num2;
    while (b != 0) {
        int temp = b;
        b = a % b;
        a = temp;
    }

    hcf = a;
    printf("HCF (GCD) of %d and %d = %d\n", num1, num2, hcf);

    return 0;
}
