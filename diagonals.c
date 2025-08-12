#include <stdio.h>

#define N 3

int sumOfDiagonals(int mat[N][N]) {
    int sum = 0;
    for (int i = 0; i < N; i++) {
        sum += mat[i][i];            
        sum += mat[i][N-1-i];        
    }
    if (N % 2 != 0)                  
        sum -= mat[N/2][N/2];
    return sum;
}

int main() {
    int matrix[N][N] = {
        {1, 2, 3},
        {4, 5, 6},
        {7, 8, 9}
    };

    printf("Sum of both diagonals: %d\n", sumOfDiagonals(matrix));
    return 0;
}
