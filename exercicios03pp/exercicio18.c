#include <stdio.h>

int main() {
    // Informações iniciais
    int anoContratacao = 1995;
    float salario = 2000;
    float aumento = 0.015; // 1.5% de aumento em 1996

    // Loop para calcular o salário anualmente até o ano atual
    int anoAtual = 2023; // Altere o ano atual conforme necessário
    for (int ano = anoContratacao + 1; ano <= anoAtual; ano++) {
        aumento = 2; // Aumento é o dobro do ano anterior
        salario += salario aumento; // Calcula o novo salário com o aumento percentual
    }

    // Exibe o salário atual do funcionário
    printf("O salário atual do funcionário é: R$%.2f\n", salario);

    return 0;
}
