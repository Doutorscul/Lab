#include <stdio.h>

int main() {
    int numeros[10];  // Array para armazenar os 10 números
    int soma = 0;     // Variável para armazenar a soma dos números
    float media;      // Variável para armazenar a média dos números
    int i;            // Variável de controle para o loop
    int total_positivos = 0;  // Variável para contar o total de números positivos

    // Solicitar ao usuário que digite 10 números inteiros
    printf("Digite 10 numeros inteiros positivos:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);  // Ler o número digitado e armazená-lo no array

        // Verificar se o número é positivo
        if (numeros[i] > 0) {
            soma += numeros[i];  // Adicionar o número à total da soma
            total_positivos++;   // Incrementar o contador de números positivos
        }
    }

    // Verificar se foram digitados números positivos
    if (total_positivos > 0) {
        // Calcular a média dos números positivos
        media = (float) soma / total_positivos;  // Converter a soma para float e dividir pelo total de positivos
        // Mostrar o resultado da média na tela
        printf("A media dos %d numeros positivos e: %.2f\n", total_positivos, media);
    } else {
        printf("Nenhum numero positivo foi digitado.\n");
    }

    return 0;
}
