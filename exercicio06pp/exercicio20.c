#include <stdio.h>

struct dma {
    int dia;
    int mes;
    int ano;
};

int isAnoBissexto(int ano) {
    if ((ano % 4 == 0 && ano % 100 != 0) || ano % 400 == 0) {
        return 1;
    }
    return 0;
}

int calcularDiasMes(int mes, int ano) {
    int diasMes[] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

    if (mes == 2 && isAnoBissexto(ano)) {
        return 29;
    }
    return diasMes[mes];
}

int calcularDiasDecorridos(struct dma data1, struct dma data2) {
    int totalDias = 0;

    if (data1.ano < data2.ano || (data1.ano == data2.ano && data1.mes < data2.mes) || (data1.ano == data2.ano && data1.mes == data2.mes && data1.dia < data2.dia)) {
        struct dma temp = data1;
        data1 = daata2;
        data2 = temp;
    }
    while (data1.dia != data2.dia || data1.mes != data2.mes || data1.ano != data2.ano) {
        totalDias++;
        data2.dia++;
        if (data2.dia > calcularDiasMes(data2.mes, data2.ano)) {
            data2.dia = 1;
            data2.mes++;
            if (data2.mes > 12) {
                data2.mes = 1;
                data2.ano++;
            }
        }
    }

    return totalDias;
}

int main() {
    struct dma data1, data2;

    printf("Digite a primeira data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data1.dia, &data1.mes, &data1.ano);

    printf("Digite a segunda data (dd/mm/aaaa): ");
    scanf("%d/%d/%d", &data2.dia, &data2.mes, &data2.ano);

    int diasDecorridos = calcularDiasDecorridos(data1, data2);

    printf("\nO número de dias decorridos entre as datas é: %d\n", diasDecorridos);

    return 0;
}
