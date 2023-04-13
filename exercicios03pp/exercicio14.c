#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n; 
    int d1, d2; 
    int i;

    srand(time(0));

    printf("Digite o número de vezes que os dados serão lançados: ");
    scanf("%d", &n);

    printf("Resultado dos lançamentos:\n");
    for (i = 0; i < n; i++) {
        d1 = rand() % 6 + 1;
        d2 = rand() % 6 + 1;

        printf("Lançamento %d: Dado 1 = %d, Dado 2 = %d, ", i + 1, d1, d2);

        if (d1 > d2) {
            printf("Dado 1 é maior que Dado 2\n");
        } else if (d1 < d2) {
            printf("Dado 1 é menor que Dado 2\n");
        } else {
            printf("Dado 1 é igual a Dado 2\n");
        }
    }

    return 0;
}
