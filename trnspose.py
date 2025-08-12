def transpose_matrix(mat):
    return [list(row) for row in zip(*mat)]

matrix = [
    [1, 2, 3],
    [4, 5, 6]
]

transposed = transpose_matrix(matrix)

for row in transposed:
    print(row)
