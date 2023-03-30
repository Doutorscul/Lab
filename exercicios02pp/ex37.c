#include <stdio.h>
#include <math.h>

int main() {
    int hora_chegada, min_chegada, hora_partida, min_partida;
    int tempo_total, horas_estacionadas;
    float preco_estacionamento;

    // Ler hora e minuto de chegada
    printf("Hora de chegada (hh mm): ");
    scanf("%d %d", &hora_chegada, &min_chegada);

    // Ler hora e minuto de partida
    printf("Hora de partida (hh mm): ");
    scanf("%d %d", &hora_partida, &min_partida);

    // Calcular tempo total em minutos
    tempo_total = (hora_partida - hora_chegada) * 60 + (min_partida - min_chegada);

    // Dividir tempo em horas, arredondando para cima
    horas_estacionadas = ceil((float)tempo_total / 60);

    // Calcular preço de acordo com as tarifas
    if (horas_estacionadas <= 2) {
        preco_estacionamento = horas_estacionadas * 1.0;
    } else if (horas_estacionadas <= 4) {
        preco_estacionamento = 2.0 + (horas_estacionadas - 2) * 1.4;
    } else {
        preco_estacionamento = 4.8 + (horas_estacionadas - 4) * 2.0;
    }

    // Imprimir preço a ser pago
    printf("Preco a pagar: R$ %.2f\n", preco_estacionamento);

    return 0;
}
