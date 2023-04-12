#include <stdio.h>

int main() {
    int i;        // Variável de controle para o loop
    int soma = 0; // Variável para armazenar a soma dos números pares

    // Calcular a soma dos 50 primeiros números pares
    for (i = 1; i <= 50; i++) {
        soma += 2 * i; // Fórmula para calcular números pares: 2 * i
    }

    // Exibir a soma dos 50 primeiros números pares
    printf("A soma dos 50 primeiros numeros pares eh: %d\n", soma);

    return 0;
}
