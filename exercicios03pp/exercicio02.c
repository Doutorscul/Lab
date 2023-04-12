#include <stdio.h>

int main() {
    int i;  // Variável de controle para o loop

    printf("Usando o loop for:\n");
    for (i = 1; i <= 100; i++) {
        printf("%d ", i);  // Escrever o número na tela
    }
    printf("\n");

    printf("\nUsando o loop while:\n");
    i = 1;  // Reiniciar a variável de controle para o loop
    while (i <= 100) {
        printf("%d ", i);  // Escrever o número na tela
        i++;  // Avançar para o próximo número
    }
    printf("\n");

    printf("\nUsando o loop do-while:\n");
    i = 1;  // Reiniciar a variável de controle para o loop
    do {
        printf("%d ", i);  // Escrever o número na tela
        i++;  // Avançar para o próximo número
    } while (i <= 100);

    return 0;
}
