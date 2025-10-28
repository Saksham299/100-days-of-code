#include <stdio.h>

int main() {
    int arr[50], n, i, first, second;

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    first = second = -99999;
    for (i = 0; i < n; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first)
            second = arr[i];
    }

    printf("Second largest element: %d\n", second);
    return 0;
}
