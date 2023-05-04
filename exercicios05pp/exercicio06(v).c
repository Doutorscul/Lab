#include <stdio.h>
#include <stdbool.h>

bool ehPrimo(int num) {
    if (num <= 1) {
        return false;
    }

    for (int i=2; i<num; i++) {
        if (num % i == 0) {
            return false;
        }
    }

    return true;
}

int main() {
    int vetor[10];

    printf("Digite 10 numeros inteiros:\n");
    for (int i=0; i<10; i++) {
        scanf("%d", &vetor[i]);
    }

    printf("\nNumeros primos e suas posicoes:\n");
    for (int i=0; i<10; i++) {
        if (ehPrimo(vetor[i])) {
            printf("%d - posicao %d\n", vetor[i], i);
        }
    }

    return 0;
}
