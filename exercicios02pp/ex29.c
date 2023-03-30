#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int i, a, b, resposta, acertos = 0;

    srand(time(NULL)); // inicializa a semente aleatória com o tempo atual

    for (i = 1; i <= 5; i++) {
        a = rand() % 100 + 1; // gera um número aleatório entre 1 e 100
        b = rand() % 100 + 1; // gera outro número aleatório entre 1 e 100
        printf("Pergunta %d: Qual é a soma de %d + %d?\n", i, a, b);
        scanf("%d", &resposta);

        if (resposta == a + b) {
            printf("Resposta correta!\n");
            acertos++;
        } else {
            printf("Resposta incorreta. A resposta correta é %d.\n", a + b);
        }
    }

    printf("O aluno acertou %d perguntas de 5.\n", acertos);

    return 0;
}
