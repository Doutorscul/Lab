#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
    int n; // número de vezes que os dados serão lançados
    int d1, d2; // valores dos dados
    int i; // contador do loop

    // Semente para geração de números aleatórios baseada no tempo atual
    srand(time(0));

    printf("Digite o número de vezes que os dados serão lançados: ");
    scanf("%d", &n);

    printf("Resultado dos lançamentos:\n");
    for (i = 0; i < n; i++) {
        // Gerando valores aleatórios para os dados (entre 1 e 6)
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
