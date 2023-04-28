#include <stdio.h>

void classifica_consumo(float km, float litros) {
    float consumo = km / litros;
    if (consumo < 8) {
        printf("Consumo: %.2f Km/l - Venda o carro!\n", consumo);
    } else if (consumo >= 8 && consumo <= 14) {
        printf("Consumo: %.2f Km/l - Econômico!\n", consumo);
    } else {
        printf("Consumo: %.2f Km/l - Super econômico!\n", consumo);
    }
}

int main() {
    float km, litros;
    printf("Digite a distância percorrida em Km: ");
    scanf("%f", &km);
    printf("Digite a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &litros);
    classifica_consumo(km, litros);
    return 0;
}