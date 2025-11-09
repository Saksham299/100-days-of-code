// Q119 (Logic Enhancers)
// Write a program to take an integer array as input.
// Only one element will be repeated. Print the repeated element.

#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter %d elements: ", n);
    for(int i = 0; i < n; i++) scanf("%d", &arr[i]);

    int visited[1000] = {0};
    for(int i = 0; i < n; i++) {
        if(visited[arr[i]]) {
            printf("%d\n", arr[i]);
            return 0;
        }
        visited[arr[i]] = 1;
    }
    return 0;
}
