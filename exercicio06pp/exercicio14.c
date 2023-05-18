#include <stdio.h>
#include <string.h>

struct Carro {
    char marca[16];
    int ano;
    float preco;
};

int main() {
    struct Carro carros[5];
    int i;
    printf("Digite os dados dos carros:\n");
    for (i = 0; i < 5; i++) {
        printf("Carro %d:\n", i + 1);
        printf("Marca: ");
        scanf("%s", carros[i].marca);
        printf("Ano: ");
        scanf("%d", &carros[i].ano);
        printf("Preco: ");
        scanf("%f", &carros[i].preco);
    }

    float p;
    do {
        printf("\nDigite um valor p (preco) ou 0 para sair: ");
        scanf("%f", &p);

        if (p == 0) {
            break;
        }

        printf("\nCarros com preco menor que %.2f:\n", p);
        for (i = 0; i < 5; i++) {
            if (carros[i].preco < p) {
                printf("Marca: %s\n", carros[i].marca);
                printf("Ano: %d\n", carros[i].ano);
                printf("Preco: %.2f\n", carros[i].preco);
                printf("-------------------------\n");
            }
        }
    } while (1);

    return 0;
}
