def add_polynomials(p1, p2):
    max_len = max(len(p1), len(p2))
    result = [0] * max_len

    for i in range(max_len):
        coef1 = p1[i] if i < len(p1) else 0
        coef2 = p2[i] if i < len(p2) else 0
        result[i] = coef1 + coef2

    return result
poly1 = [5, 2, 3]
poly2 = [1, 1, 0, 4]

sum_poly = add_polynomials(poly1, poly2)
print("Sum polynomial coefficients:", sum_poly)
