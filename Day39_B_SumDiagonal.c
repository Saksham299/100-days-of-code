#include <stdio.h>

int main() {
    int matrix[10][10], n, i, j, sum = 0;

    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    printf("Enter elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < n; i++)
        sum += matrix[i][i];

    printf("Sum of main diagonal = %d\n", sum);

    return 0;
}
