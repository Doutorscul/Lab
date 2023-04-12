#include <stdio.h>

int main() {
    int num;    // Variável para armazenar o número digitado
    int soma = 0; // Variável para armazenar a soma dos divisores

    // Ler o número do usuário
    printf("Digite um numero inteiro: ");
    scanf("%d", &num);

    // Calcular a soma dos divisores do número
    for (int i = 1; i < num; i++) {
        if (num % i == 0) {
            soma += i;
        }
    }

    // Exibir a soma dos divisores do número
    printf("A soma dos divisores de %d (excluindo ele proprio) eh: %d\n", num, soma);

    return 0;
