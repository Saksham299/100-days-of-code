// Q104 (Logic Enhancers)
// Write a Program to take a positive integer n as input,
// and find the pivot integer x such that sum(1..x) = sum(x..n). Print x or -1 if no such integer exists.

#include <stdio.h>

int main() {
    int n;
    printf("Enter n: ");
    scanf("%d", &n);
    int total = n * (n + 1) / 2;
    for(int x = 1; x <= n; x++) {
        int leftSum = x * (x + 1) / 2;
        int rightSum = total - (x - 1) * x / 2;
        if(leftSum == rightSum) {
            printf("%d\n", x);
            return 0;
        }
    }
    printf("-1\n");
    return 0;
}
