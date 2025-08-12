def rotate_matrix(mat):
    # Transpose + Reverse each row
    return [list(row) for row in zip(*mat[::-1])]

matrix = [
    [1,  2,  3],
    [4,  5,  6],
    [7,  8,  9]
]

rotated = rotate_matrix(matrix)

for row in rotated:
    print(row)
