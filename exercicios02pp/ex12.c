#include <stdio.h>
#include <math.h>

int main() {
    int numero;
    printf("Digite um número inteiro: ");
    scanf("%d", &numero);

    if (numero < 0) {
        printf("Número inválido.\n");
    } else {
        printf("O logaritmo de %d é %.2f\n", numero, log10(numero));
    }

    return 0;
}
