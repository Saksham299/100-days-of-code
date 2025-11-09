// Q116 (Logic Enhancers)
// Write a program to take an integer array nums and an integer target as inputs.
// Find two distinct indices i and j such that nums[i] + nums[j] == target.
// Print the indices or "-1 -1" if no solution exists.

#include <stdio.h>

int main() {
    int n, target;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &nums[i]);
    printf("Enter target: ");
    scanf("%d", &target);

    for(int i = 0; i < n; i++) {
        for(int j = i + 1; j < n; j++) {
            if(nums[i] + nums[j] == target) {
                printf("%d %d\n", i, j);
                return 0;
            }
        }
    }
    printf("-1 -1\n");
    return 0;
}
