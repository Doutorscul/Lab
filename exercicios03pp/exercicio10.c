#include <stdio.h>

int main() {
    int i;        
    int soma = 0;

    for (i = 1; i <= 50; i++) {
        soma += 2 * i;
    }

    printf("A soma dos 50 primeiros numeros pares eh: %d\n", soma);

    return 0;
}
