// Q112 (Logic Enhancers)
// Write a program to take an integer array arr as input.
// The task is to find the maximum sum of any contiguous subarray using Kadane's algorithm.
// If all elements are negative, print the largest element.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int maxSum = arr[0], currSum = arr[0];
    for(int i = 1; i < n; i++) {
        if(currSum < 0) currSum = arr[i];
        else currSum += arr[i];
        if(currSum > maxSum) maxSum = currSum;
    }

    printf("%d\n", maxSum);
    return 0;
}

