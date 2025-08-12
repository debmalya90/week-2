def is_sparse(matrix):
    rows = len(matrix)
    cols = len(matrix[0])
    zero_count = sum(1 for row in matrix for val in row if val == 0)
    return zero_count > (rows * cols) / 2

matrix = [
    [0, 0, 3],
    [0, 5, 0],
    [0, 0, 0]
]

if is_sparse(matrix):
    print("Matrix is Sparse")
else:
    print("Matrix is Not Sparse")
