def multiply_polynomials(p1, p2):
    result_size = len(p1) + len(p2) - 1
    result = [0] * result_size

    for i in range(len(p1)):
        for j in range(len(p2)):
            result[i + j] += p1[i] * p2[j]
    return result

poly1 = [1, 2, 3]
poly2 = [4, 1]

product = multiply_polynomials(poly1, poly2)
print("Product polynomial coefficients:", product)
