#include <stdio.h>

int main() {
    int soma = 0; // Variável para armazenar a soma dos números

    // Loop para iterar de 1 até 999 (abaixo de 1000)
    for (int i = 1; i < 1000; i++) {
        // Verificar se o número é múltiplo de 3 ou 5
        if (i % 3 == 0 || i % 5 == 0) {
            soma += i; // Adicionar o número à soma
        }
    }

    // Exibir a soma dos números
    printf("A soma dos numeros naturais abaixo de 1000 que sao multiplos de 3 ou 5 eh: %d\n", soma);

    return 0;
}
