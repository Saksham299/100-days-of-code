// Q103 (Logic Enhancers)
// Write a Program to take an array of integers as input,
// calculate the pivot index where left sum = right sum. Print leftmost pivot index or -1 if not exists.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &nums[i]);

    int total = 0;
    for(int i = 0; i < n; i++) total += nums[i];
    int leftSum = 0, found = -1;

    for(int i = 0; i < n; i++) {
        if(leftSum == total - leftSum - nums[i]) {
            found = i;
            break;
        }
        leftSum += nums[i];
    }
    printf("%d\n", found);
    return 0;
}
