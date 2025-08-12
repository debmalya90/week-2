#include <stdio.h>

void spiralPrint(int rows, int cols, int arr[rows][cols]) {
    int top = 0, bottom = rows - 1;
    int left = 0, right = cols - 1;

    while (top <= bottom && left <= right) {
        for (int i = left; i <= right; i++)
            printf("%d ", arr[top][i]);
        top++;
        for (int i = top; i <= bottom; i++)
            printf("%d ", arr[i][right]);
        right--;
        if (top <= bottom) {
            for (int i = right; i >= left; i--)
                printf("%d ", arr[bottom][i]);
            bottom--;
        }
        if (left <= right) {
            for (int i = bottom; i >= top; i--)
                printf("%d ", arr[i][left]);
            left++;
        }
    }
}

int main() {
    int matrix[4][4] = {
        {1,  2,  3,  4},
        {5,  6,  7,  8},
        {9, 10, 11, 12},
        {13,14, 15, 16}
    };
    
    spiralPrint(4, 4, matrix);
    return 0;
}
