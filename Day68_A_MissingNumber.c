// Q118 (Logic Enhancers)
// Write a program to take an input array of size n. The array should contain integers between 0 to n except one.
// Print the missing number.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements (0 to %d, one missing): ", n, n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int expectedSum = n * (n + 1) / 2;
    int actualSum = 0;
    for(int i = 0; i < n; i++) actualSum += arr[i];

    printf("%d\n", expectedSum - actualSum);
    return 0;
}
