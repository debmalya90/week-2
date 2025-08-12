#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];
    int zeroCount = 0;

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 0)
                zeroCount++;
        }
    }

    int totalElements = rows * cols;

    if (zeroCount > totalElements / 2)
        printf("Matrix is Sparse\n");
    else
        printf("Matrix is Not Sparse\n");

    return 0;
}
