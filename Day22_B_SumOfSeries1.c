// Q44 (Loops without Arrays/Strings)
// Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include <stdio.h>

int main() {
    int i, n;
    float sum = 0.0;
    float numerator = 1.0, denominator = 2.0;

    // Input number of terms
    printf("Enter number of terms: ");
    scanf("%d", &n);

    for (i = 1; i <= n; i++) {
        sum += numerator / denominator;
        numerator += 2;
        denominator += 2;
    }

    printf("Sum of the series = %.2f\n", sum);

    return 0;
}
