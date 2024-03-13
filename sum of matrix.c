#include <stdio.h>

int main() {
    int m, n, i, j, sum = 0;

    printf("Enter the order of the matrix (m*n): ");
    scanf("%d*%d", &m, &n);

    int matrix[m][n];

    printf("Enter the elements of the matrix:\n");
    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &matrix[i][j]);
        }
    }

    for (i = 0; i < m; i++) {
        for (j = 0; j < n; j++) {
            sum += matrix[i][j];
        }
    }

    printf("Sum of the elements in the matrix = %d\n", sum);

    return 0;
}
