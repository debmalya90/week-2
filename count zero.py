def count_zeros(matrix):
    return sum(1 for row in matrix for val in row if val == 0)

# Example
matrix = [
    [0, 2, 3],
    [4, 0, 6],
    [0, 8, 0]
]

print("Number of zeros:", count_zeros(matrix))
