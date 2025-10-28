#include <stdio.h>

int main() {
    int arr[50], n, k, temp[50];

    printf("Enter number of elements: ");
    scanf("%d", &n);
    printf("Enter elements:\n");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);

    printf("Enter number of positions to rotate: ");
    scanf("%d", &k);

    for (int i = 0; i < n; i++)
        temp[(i + k) % n] = arr[i];

    printf("Array after rotation:\n");
    for (int i = 0; i < n; i++)
        printf("%d ", temp[i]);

    return 0;
}
