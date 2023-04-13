#include <stdio.h>

int main() {
    
    int anoContratacao = 1995;
    float salario = 2000;
    float aumento = 0.015; 

    
    int anoAtual = 2023; 
    for (int ano = anoContratacao + 1; ano <= anoAtual; ano++) {
        aumento = 2;
        salario += salario aumento;
    }

    
    printf("O salário atual do funcionário é: R$%.2f\n", salario);

    return 0;
}
