def is_identity_matrix(mat):
    rows = len(mat)
    cols = len(mat[0])
    if rows != cols:
        return False  # Must be square

    for i in range(rows):
        for j in range(cols):
            if i == j and mat[i][j] != 1:
                return False
            elif i != j and mat[i][j] != 0:
                return False
    return True

matrix = [
    [1, 0, 0],
    [0, 1, 0],
    [0, 0, 1]
]

if is_identity_matrix(matrix):
    print("Identity Matrix")
else:
    print("Not an Identity Matrix")
