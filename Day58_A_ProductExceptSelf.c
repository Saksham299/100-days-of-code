// Q108 (Logic Enhancers)
// Write a Program to take an integer array nums.
// Print an array answer such that answer[i] is the product of all elements except nums[i].

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int nums[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &nums[i]);

    for(int i = 0; i < n; i++) {
        int prod = 1;
        for(int j = 0; j < n; j++) {
            if(i != j) prod *= nums[j];
        }
        printf("%d ", prod);
    }
    printf("\n");
    return 0;
}
