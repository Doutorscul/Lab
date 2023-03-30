#include <stdio.h>
#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Escolha a opcao:\n");
    printf("1 - Soma de 2 numeros.\n");
    printf("2 - Diferenca entre 2 numeros (maior pelo menor).\n");
    printf("3 - Produto entre 2 numeros.\n");
    printf("4 - Divisao entre 2 numeros (o denominador nao pode ser zero).\n");
    scanf("%d", &opcao);

    switch(opcao) {
        case 1:
            printf("Digite os dois numeros: ");
            scanf("%f %f", &num1, &num2);
            resultado = num1 + num2;
            printf("O resultado da soma eh: %f", resultado);
            break;
        case 2:
            printf("Digite os dois numeros: ");
            scanf("%f %f", &num1, &num2);
            if(num1 > num2)
                resultado = num1 - num2;
            else
                resultado = num2 - num1;
            printf("O resultado da diferenca eh: %f", resultado);
            break;
        case 3:
            printf("Digite os dois numeros: ");
            scanf("%f %f", &num1, &num2);
            resultado = num1 * num2;
            printf("O resultado do produto eh: %f", resultado);
            break;
        case 4:
            printf("Digite os dois numeros: ");
            scanf("%f %f", &num1, &num2);
            if(num2 == 0)
                printf("Erro: o denominador nao pode ser zero.");
            else {
                resultado = num1 / num2;
                printf("O resultado da divisao eh: %f", resultado);
            }
            break;
        default:
            printf("Erro: opcao invalida.");
    }

    return 0;
}
