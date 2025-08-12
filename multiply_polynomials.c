#include <stdio.h>

int main() {
    int n1, n2;
    printf("Enter degree of first polynomial: ");
    scanf("%d", &n1);
    printf("Enter degree of second polynomial: ");
    scanf("%d", &n2);

    int poly1[n1+1], poly2[n2+1], product[n1+n2+1];

    for (int i = 0; i <= n1+n2; i++)
        product[i] = 0;

    printf("Enter coefficients of first polynomial:\n");
    for (int i = 0; i <= n1; i++)
        scanf("%d", &poly1[i]);

    printf("Enter coefficients of second polynomial:\n");
    for (int i = 0; i <= n2; i++)
        scanf("%d", &poly2[i]);

    for (int i = 0; i <= n1; i++) {
        for (int j = 0; j <= n2; j++) {
            product[i + j] += poly1[i] * poly2[j];
        }
    }

    printf("Product polynomial:\n");
    for (int i = n1 + n2; i >= 0; i--)
        printf("%dx^%d ", product[i], i);

    return 0;
}
