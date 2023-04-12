#include <stdio.h>

// Função para verificar se um número é palíndromo
int ehPalindromo(int numero) {
    int numeroOriginal = numero;
    int numeroInvertido = 0;

    // Inverte o número
    while (numero > 0) {
        int digito = numero % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
        numero /= 10;
    }

    // Verifica se o número original é igual ao número invertido
    if (numeroOriginal == numeroInvertido) {
        return 1; // É palíndromo
    } else {
        return 0; // Não é palíndromo
    }
}

int main() {
    int maiorPalindromo = 0;

    // Percorre todos os produtos de dois números de 3 dígitos
    for (int i = 100; i <= 999; i++) {
        for (int j = i; j <= 999; j++) {
            int produto = i * j;
            if (ehPalindromo(produto) && produto > maiorPalindromo) {
                maiorPalindromo = produto;
            }
        }
    }

    // Exibe o maior número palíndromo encontrado
    printf("O maior número palíndromo feito a partir do produto de dois números de 3 dígitos é: %d\n", maiorPalindromo);

    return 0;
}
