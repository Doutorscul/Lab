 #include <stdio.h>
#include <stdlib.h>

// Constante que representa o ano atual
#define ANO_ATUAL 2022

int main() {
    // Variáveis para armazenar a data de nascimento
    int dia, mes, ano;

    // Leitura dos valores de dia, mês e ano
    printf("Digite a data de nascimento (dia mes ano): ");
    scanf("%d %d %d", &dia, &mes, &ano);

    // Variável para armazenar se a data é válida ou não
    bool dataValida = true;

    // Verificação do ano
    if (ano > ANO_ATUAL) {
        dataValida = false;
    }

    // Verificação do mês
    if (mes < 1  mes > 12) {
        dataValida = false;
    }

    // Verificação do dia
    int ultimoDia;
    if (mes == 2) {
        // Verificação para fevereiro (considerando anos bissextos)
        if ((ano % 4 == 0 && ano % 100 != 0)  ano % 400 == 0) {
            ultimoDia = 29;
        } else {
            ultimoDia = 28;
        }
    } else if (mes == 4  mes == 6  mes == 9  mes == 11) {
        // Meses com 30 dias
        ultimoDia = 30;
    } else {
        // Meses com 31 dias
        ultimoDia = 31;
    }
    if (dia < 1  dia > ultimoDia) {
        dataValida = false;
    }

    // Impressão da mensagem final
    if (dataValida) {
        printf("Data válida.\n");
    } else {
        printf("Data inválida.\n");
    }

    return 0;
}
