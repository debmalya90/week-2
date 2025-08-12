def sum_of_diagonals(mat):
    n = len(mat)
    main_diag = sum(mat[i][i] for i in range(n))
    anti_diag = sum(mat[i][n-1-i] for i in range(n))
    return main_diag + anti_diag - (mat[n//2][n//2] if n % 2 != 0 else 0)

matrix = [
    [1, 2, 3],
    [4, 5, 6],
    [7, 8, 9]
]

print("Sum of both diagonals:", sum_of_diagonals(matrix))
