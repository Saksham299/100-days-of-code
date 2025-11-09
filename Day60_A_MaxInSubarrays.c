// Q110 (Logic Enhancers)
// Write a program to take an integer array arr and an integer k as inputs.
// Find the maximum element in each subarray of size k moving from left to right.

#include <stdio.h>

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    for(int i = 0; i <= n - k; i++) {
        int max = arr[i];
        for(int j = i + 1; j < i + k; j++) {
            if(arr[j] > max) max = arr[j];
        }
        printf("%d ", max);
    }
    printf("\n");
    return 0;
}
