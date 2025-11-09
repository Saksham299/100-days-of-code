// Q102 (Logic Enhancers)
// Write a Program to take a sorted array arr[] and an integer x as input,
// find the index (0-based) of the smallest element in arr[] that is greater than or equal to x and print it.
// If such an element does not exist, print -1.

#include <stdio.h>

int main() {
    int n, x;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d sorted elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);
    printf("Enter x: ");
    scanf("%d", &x);

    int ans = -1;
    for(int i = 0; i < n; i++) {
        if(arr[i] >= x) {
            ans = i;
            break;
        }
    }
    printf("%d\n", ans);
    return 0;
}
