#include <stdio.h>
#include <stdbool.h>

#define LIMITE 2000000

int main() {
    // Inicializa um array de booleanos para representar os números de 2 a LIMITE como primos
    bool numeros[LIMITE + 1];
    for (int i = 2; i <= LIMITE; i++) {
        numeros[i] = true;
    }

    // Utiliza o Crivo de Eratóstenes para marcar os múltiplos dos números primos como não primos
    for (int i = 2; i * i <= LIMITE; i++) {
        if (numeros[i]) {
            for (int j = i * i; j <= LIMITE; j += i) {
                numeros[j] = false;
            }
        }
    }

    // Calcula a soma dos números primos
    long long int soma = 0; // Usamos um long long int para evitar estouro de valor
    for (int i = 2; i <= LIMITE; i++) {
        if (numeros[i]) {
            soma += i;
        }
    }

    // Exibe a soma dos números primos
    printf("A soma de todos os números primos abaixo de %d é: %lld\n", LIMITE, soma);

    return 0;
}
