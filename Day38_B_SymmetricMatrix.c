#include <stdio.h>

int main() {
    int matrix[10][10], rows, cols, i, j, flag = 1;

    printf("Enter size of square matrix: ");
    scanf("%d", &rows);
    cols = rows;

    printf("Enter elements:\n");
    for (i = 0; i < rows; i++)
        for (j = 0; j < cols; j++)
            scanf("%d", &matrix[i][j]);

    for (i = 0; i < rows; i++) {
        for (j = 0; j < cols; j++) {
            if (matrix[i][j] != matrix[j][i]) {
                flag = 0;
                break;
            }
        }
    }

    if (flag)
        printf("Matrix is symmetric.\n");
    else
        printf("Matrix is not symmetric.\n");

    return 0;
}
