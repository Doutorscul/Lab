#include <stdio.h>

int main() {
    int vetor[8];
    int x, y;

    printf("Digite os valores do vetor:\n");
    for(int i=0; i<8; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("Digite os valores de X e Y (entre 0 e 7):\n");
    scanf("%d %d", &x, &y);

    int soma = vetor[x] + vetor[y];
    printf("Soma dos valores de vetor[%d] e vetor[%d]: %d\n", x, y, soma);

    return 0;
}