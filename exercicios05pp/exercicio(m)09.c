#include <stdio.h>
#include <string.h>

#define TAMANHO 5

int main() {
    char modelos[TAMANHO][20];
    float consumo[TAMANHO];

    for (int i = 0; i < TAMANHO; i++) {
        printf("Digite o modelo do carro %d: ", i+1);
        scanf("%s", modelos[i]);
        printf("Digite o consumo do carro %d em km/l: ", i+1);
        scanf("%f", &consumo[i]);
    }

    int indice_mais_economico = 0;
    for (int i = 1; i < TAMANHO; i++) {
        if (consumo[i] > consumo[indice_mais_economico]) {
            indice_mais_economico = i;
        }
    }

    printf("\nModelo mais econômico: %s\n", modelos[indice_mais_economico]);

    printf("\nConsumo para percorrer 1000 km:\n");
    for (int i = 0; i < TAMANHO; i++) {
        float litros = 1000.0 / consumo[i];
        printf("%s: %.2f litros\n", modelos[i], litros);
    }

    return 0;
}
