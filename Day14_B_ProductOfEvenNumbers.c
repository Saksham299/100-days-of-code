// Q28 (Loops without Arrays/Strings)
// Write a program to print the product of even numbers from 1 to n.

#include <stdio.h>

int main() {
    int n, i;
    long long product = 1;
    int found = 0;

    // Input value of n
    printf("Enter the value of n: ");
    scanf("%d", &n);

    // Calculate product of even numbers
    for (i = 2; i <= n; i += 2) {
        product *= i;
        found = 1;
    }

    if (found)
        printf("Product of even numbers from 1 to %d = %lld\n", n, product);
    else
        printf("No even numbers in the given range.\n");

    return 0;
}
