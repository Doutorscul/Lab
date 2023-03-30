 #include <stdio.h>
 #include <stdio.h>

int main() {
    float distancia, litros, consumo;

    // leitura da distância em Km e da quantidade de litros de gasolina consumidos
    printf("Digite a distância percorrida (em Km): ");
    scanf("%f", &distancia);
    printf("Digite a quantidade de litros de gasolina consumidos: ");
    scanf("%f", &litros);

    // cálculo do consumo em Km/l
    consumo = distancia / litros;

    // verificação do consumo e impressão da mensagem correspondente
    if (consumo < 8) {
        printf("CONSUMO: %.2f Km/l\nMENSAGEM: Venda o carro!\n", consumo);
    } else if (consumo <= 14) {
        printf("CONSUMO: %.2f Km/l\nMENSAGEM: Econômico!\n", consumo);
    } else {
        printf("CONSUMO: %.2f Km/l\nMENSAGEM: Super econômico!\n", consumo);
    }

    return 0;
}
