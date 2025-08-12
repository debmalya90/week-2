#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter degree of first polynomial: ");
    scanf("%d", &n1);
    printf("Enter degree of second polynomial: ");
    scanf("%d", &n2);

    int size = (n1 > n2 ? n1 : n2) + 1;
    int poly1[size], poly2[size], sum[size];

    for (int i = 0; i < size; i++) {
        poly1[i] = 0;
        poly2[i] = 0;
    }

    printf("Enter coefficients of first polynomial:\n");
    for (int i = 0; i <= n1; i++)
        scanf("%d", &poly1[i]);

    printf("Enter coefficients of second polynomial:\n");
    for (int i = 0; i <= n2; i++)
        scanf("%d", &poly2[i]);

    for (int i = 0; i < size; i++)
        sum[i] = poly1[i] + poly2[i];

    printf("Sum polynomial coefficients:\n");
    for (int i = size - 1; i >= 0; i--)
        printf("%dx^%d ", sum[i], i);

    return 0;
}
