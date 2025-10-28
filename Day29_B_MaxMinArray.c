// Q58 (Arrays (1D))
// Find the maximum and minimum element in an array.

#include <stdio.h>

int main() {
    int n, i, arr[100], max, min;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    max = min = arr[0];

    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }

    printf("Maximum = %d\nMinimum = %d\n", max, min);
    return 0;
}
