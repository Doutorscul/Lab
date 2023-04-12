#include <stdio.h>

int main() {
    int n;

    // Lê o número inteiro positivo n
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    int num = 1; // Número a ser impresso
    int linha, coluna; // Variáveis de controle para as linhas e colunas do Triângulo de Floyd

    // Loop para imprimir n linhas do Triângulo de Floyd
    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", num);
            num++; // Incrementa o número a ser impresso
        }
        printf("\n");
    }

    return 0;
}
