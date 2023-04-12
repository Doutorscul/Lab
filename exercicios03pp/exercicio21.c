#include <stdio.h>
#include <stdbool.h>

// Função para verificar se um número é primo
bool ehPrimo(int numero) {
    if (numero <= 1) {
        return false; // Números menores ou iguais a 1 não são primos
    }

    for (int i = 2; i * i <= numero; i++) {
        if (numero % i == 0) {
            return false; // Números divisíveis por algum outro número não são primos
        }
    }

    return true; // Se passou por todos os testes, o número é primo
}

int main() {
    int a, b;
    int contador = 0; // Variável para contar a quantidade de números primos

    // Solicita ao usuário que informe os números a e b
    printf("Informe dois números inteiros a e b (separados por espaço): ");
    scanf("%d %d", &a, &b);

    // Verifica e conta a quantidade de números primos entre a e b
    for (int i = a; i <= b; i++) {
        if (ehPrimo(i)) {
            contador++;
        }
    }

    // Exibe a quantidade de números primos encontrados
    printf("A quantidade de números primos entre %d e %d é: %d\n", a, b, contador);

    return 0;
}
