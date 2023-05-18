#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct Carta {
    int naipe;
    int valor;
};

void distribuirCartas(struct Carta baralho[], int numCartas, struct Carta jogador1[], struct Carta jogador2[], int numCartasPorJogador) {
    srand(time(NULL));
    for (int i = numCartas - 1; i > 0; i--) {
        int j = rand() % (i + 1);
        struct Carta temp = baralho[i];
        baralho[i] = baralho[j];
        baralho[j] = temp;
    }

    for (int i = 0; i < numCartasPorJogador; i++) {
        jogador1[i] = baralho[i];
        jogador2[i] = baralho[i + numCartasPorJogador];
    }
}

void exibirCartas(struct Carta jogador[], int numCartas) {
    for (int i = 0; i < numCartas; i++) {
        printf("Naipe: %d, Valor: %d\n", jogador[i].naipe, jogador[i].valor);
    }
    printf("\n");
}

int main() {
    struct Carta baralho[52];
    struct Carta jogador1[3];
    struct Carta jogador2[3];

    int contador = 0;
    for (int naipe = 1; naipe <= 4; naipe++) {
        for (int valor = 1; valor <= 13; valor++) {
            baralho[contador].naipe = naipe;
            baralho[contador].valor = valor;
            contador++;
        }
    }

    distribuirCartas(baralho, 52, jogador1, jogador2, 3);

    printf("Cartas do Jogador 1:\n");
    exibirCartas(jogador1, 3);

    printf("Cartas do Jogador 2:\n");
    exibirCartas(jogador2, 3);

    return 0;
}
