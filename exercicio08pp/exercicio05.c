#include <stdio.h>

int main() {
    int A, B;
    int *ptrA, *ptrB;

    printf("Digite o valor de A: ");
    scanf("%d", &A);

    printf("Digite o valor de B: ");
    scanf("%d", &B);

    ptrA = &A;
    ptrB = &B;

    *ptrA = 2 * (*ptrA);
    *ptrB = 2 * (*ptrB);

    int soma = *ptrA + *ptrB;

    printf("Soma do dobro dos números: %d\n", soma);

    return 0;
}
