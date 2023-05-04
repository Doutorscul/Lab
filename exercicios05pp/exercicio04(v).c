#include <stdio.h>

int main() {
    int valores[5];
    int maior = 0, menor = 0;

    printf("Digite 5 valores inteiros:\n");
    for(int i=0; i<5; i++) {
        scanf("%d", &valores[i]);
        if (i == 0) {
            maior = valores[i];
            menor = valores[i];
        }

        if (valores[i] > maior) {
            maior = valores[i];
        }
        if (valores[i] < menor) {
            menor = valores[i];
        }
    }

    printf("Posicao do maior valor: ");
    for(int i=0; i<5; i++) {
        if (valores[i] == maior) {
            printf("%d\n", i);
            break;
        }
    }

    printf("Posicao do menor valor: ");
    for(int i=0; i<5; i++) {
        if (valores[i] == menor) {
            printf("%d\n", i);
            break;
        }
    }

    return 0;
}