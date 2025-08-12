#include <stdio.h>

#define N 3  // Size of square matrix

void rotate90(int mat[N][N]) {
    int temp[N][N];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            temp[j][N-1-i] = mat[i][j];

    for (int i = 0; i < N; i++)
        for (int j = 0; j < N; j++)
            mat[i][j] = temp[i][j];
}

void printMatrix(int mat[N][N]) {
    for (int i = 0; i < N; i++) {
        for (int j = 0; j < N; j++)
            printf("%d ", mat[i][j]);
        printf("\n");
    }
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    rotate90(matrix);
    printMatrix(matrix);

    return 0;
}
