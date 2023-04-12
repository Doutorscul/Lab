#include <stdio.h>

int main() {
    int valores[10];  // Array para armazenar os 10 valores
    int soma = 0;     // Variável para armazenar a soma dos valores
    int i;            // Variável de controle para o loop

    // Solicitar ao usuário para digitar 10 valores
    printf("Digite 10 valores:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);  // Ler o valor digitado e armazená-lo no array
    }

    // Somar os valores digitados
    for (i = 0; i < 10; i++) {
        soma += valores[i];  // Adicionar o valor ao total da soma
    }

    // Mostrar o resultado da soma na tela
    printf("A soma dos 10 valores é: %d\n", soma);

    return 0;
}
