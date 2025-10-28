#include <stdio.h>

int main() {
    int matrix[10][10], n, i, j;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    printf("Diagonal traversal:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j <= i; j++)
            printf("%d ", matrix[j][i - j]);
    }

    printf("\n");
    return 0;
}
