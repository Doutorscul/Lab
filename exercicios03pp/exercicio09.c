#include <stdio.h>

int main() {
    int n; // Variável para armazenar o número inteiro N
    int i; // Variável de controle para o loop

    // Solicitar ao usuário que digite um número inteiro N
    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    // Verificar se N é positivo
    if (n <= 0) {
        printf("Erro: N deve ser um numero inteiro positivo maior que zero.\n");
        return 1; // Encerrar o programa com código de erro
    }

    // Imprimir os N primeiros números naturais ímpares
    printf("Os primeiros %d numeros naturais impares sao: ", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1); // Fórmula para calcular números ímpares: 2*i - 1
    }
    printf("\n");

    return 0;
}
