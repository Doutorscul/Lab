#include <stdio.h>

int main() {
    int num = 1;  // Iniciar com o primeiro número maior que 0
    int count = 0;  // Contador para acompanhar quantos múltiplos de 3 foram encontrados

    printf("Os cinco primeiros multiplos de 3 sao: \n");

    // Loop para encontrar e mostrar os cinco primeiros múltiplos de 3
    while (count < 5) {
        if (num % 3 == 0) {  // Verificar se o número é múltiplo de 3
            printf("%d ", num);  // Mostrar o múltiplo de 3
            count++;  // Incrementar o contador de múltiplos de 3 encontrados
        }
        num++;  // Avançar para o próximo número
    }

    printf("\n");

    return 0;
}
