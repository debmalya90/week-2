def spiral_print(mat):
    top, bottom, left, right = 0, len(mat)-1, 0, len(mat[0])-1
    while top <= bottom and left <= right:
        for i in range(left, right+1): print(mat[top][i], end=" ")
        for i in range(top+1, bottom+1): print(mat[i][right], end=" ")
        if top < bottom:
            for i in range(right-1, left-1, -1): print(mat[bottom][i], end=" ")
        if left < right:
            for i in range(bottom-1, top, -1): print(mat[i][left], end=" ")
        top, bottom, left, right = top+1, bottom-1, left+1, right-1

matrix = [
    [1,  2,  3,  4],
    [5,  6,  7,  8],
    [9, 10, 11, 12],
    [13,14, 15, 16]
]
spiral_print(matrix)
