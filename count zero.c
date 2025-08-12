#include <stdio.h>

int main() {
    int rows, cols, count = 0;
    printf("Enter rows and columns: ");
    scanf("%d %d", &rows, &cols);

    int mat[rows][cols];

    printf("Enter matrix elements:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &mat[i][j]);
            if (mat[i][j] == 0)
                count++;
        }
    }

    printf("Number of zeros: %d\n", count);

    return 0;
}
