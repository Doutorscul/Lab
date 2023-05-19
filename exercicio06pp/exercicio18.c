#include <stdio.h>

struct Aeroporto {
    int codigo;
    int voosSaida;
    int voosChegada;
};

struct Voo {
    int origem;
    int destino;
};

int main() {
    const int V = 5; 
    const int A = 5;

    struct Aeroporto aeroportos[A];
    struct Voo voos[V];
    int i;

    for (i = 0; i < A; i++) {
        aeroportos[i].codigo = i;
        aeroportos[i].voosSaida = 0;
        aeroportos[i].voosChegada = 0;
    }

    for (i = 0; i < V; i++) {
        printf("Digite o código do aeroporto de origem do voo %d: ", i + 1);
        scanf("%d", &voos[i].origem);
        while (voos[i].origem < 0 || voos[i].origem >= A) {
            printf("Código de aeroporto inválido. Digite novamente: ");
            scanf("%d", &voos[i].origem);
        }

        printf("Digite o código do aeroporto de destino do voo %d: ", i + 1);
        scanf("%d", &voos[i].destino);
        while (voos[i].destino < 0 || voos[i].destino >= A) {
            printf("Código de aeroporto inválido. Digite novamente: ");
            scanf("%d", &voos[i].destino);
        }

        aeroportos[voos[i].origem].voosSaida++;
        aeroportos[voos[i].destino].voosChegada++;
    }
    printf("\nDados dos aeroportos:\n");
    for (i = 0; i < A; i++) {
        printf("Aeroporto %d:\n", aeroportos[i].codigo);
        printf("- Voos de saída: %d\n", aeroportos[i].voosSaida);
        printf("- Voos de chegada: %d\n", aeroportos[i].voosChegada);
        printf("\n");
    }

    return 0;
}
