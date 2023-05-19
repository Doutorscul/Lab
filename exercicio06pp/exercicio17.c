#include <stdio.h>

struct Eletrodomestico {
    char nome[16];
    float potencia;
    float tempoAtivo;
};

int main() {
    struct Eletrodomestico eletrodomesticos[5];
    int i;
    float consumoTotal = 0.0;
    for (i = 0; i < 5; i++) {
        printf("Digite o nome do eletrodoméstico %d: ", i + 1);
        scanf("%s", eletrodomesticos[i].nome);
        printf("Digite a potência do eletrodoméstico %d (em kW): ", i + 1);
        scanf("%f", &eletrodomesticos[i].potencia);
        printf("Digite o tempo ativo por dia do eletrodoméstico %d (em horas): ", i + 1);
        scanf("%f", &eletrodomesticos[i].tempoAtivo);
    }
    int tempo;
    printf("Digite o tempo em dias: ");
    scanf("%d", &tempo);

    for (i = 0; i < 5; i++) {
        consumoTotal += eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * tempo;
    }
    printf("\nConsumo total na casa: %.2f kW\n", consumoTotal);
    printf("Consumo relativo de cada eletrodoméstico:\n");
    for (i = 0; i < 5; i++) {
        float consumoRelativo = (eletrodomesticos[i].potencia * eletrodomesticos[i].tempoAtivo * tempo) / consumoTotal * 100;
        printf("- %s: %.2f%%\n", eletrodomesticos[i].nome, consumoRelativo);
    }

    return 0;
}
