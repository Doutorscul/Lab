#include <stdio.h>

struct Data {
    int dia;
    int mes;
    int ano;
};

struct Compromisso {
    char descricao[61];
    struct Data data;
};

int main() {
    struct Compromisso agenda[5];
    int i;
    for (i = 0; i < 5; i++) {
        printf("Digite a descrição do compromisso %d: ", i + 1);
        fgets(agenda[i].descricao, sizeof(agenda[i].descricao), stdin);
        printf("Digite o dia do compromisso %d: ", i + 1);
        scanf("%d", &agenda[i].data.dia);
        printf("Digite o mês do compromisso %d: ", i + 1);
        scanf("%d", &agenda[i].data.mes);
        printf("Digite o ano do compromisso %d: ", i + 1);
        scanf("%d", &agenda[i].data.ano);
        getchar(); 
    }
    int mes, ano;
    printf("\n");
    do {
        printf("Digite o mês (ou 0 para sair): ");
        scanf("%d", &mes);
        if (mes == 0) {
            break;
        }
        printf("Digite o ano: ");
        scanf("%d", &ano);

        printf("\nCompromissos do mês %d do ano %d:\n", mes, ano);
        for (i = 0; i < 5; i++) {
            if (agenda[i].data.mes == mes && agenda[i].data.ano == ano) {
                printf("- %s", agenda[i].descricao);
            }
        }
        printf("\n");
    } while (mes != 0);

    return 0;
}
