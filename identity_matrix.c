#include <stdio.h>

int main() {
    int n, i, j, isIdentity = 1;
    printf("Enter size of square matrix: ");
    scanf("%d", &n);

    int mat[n][n];
    printf("Enter matrix elements:\n");
    for (i = 0; i < n; i++)
        for (j = 0; j < n; j++)
            scanf("%d", &mat[i][j]);

    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if ((i == j && mat[i][j] != 1) || (i != j && mat[i][j] != 0)) {
                isIdentity = 0;
                break;
            }
        }
    }

    if (isIdentity)
        printf("Identity Matrix\n");
    else
        printf("Not an Identity Matrix\n");

    return 0;
}
