#include <stdio.h>
#include <stdio.h>

int main() {
    int opcao;
    float num1, num2, resultado;

    printf("Escolha uma opcao:\n");
    printf("1 - Adicao\n");
    printf("2 - Subtracao\n");
    printf("3 - Multiplicacao\n");
    printf("4 - Divisao\n");

    scanf("%d", &opcao);

    printf("Digite dois numeros:\n");
    scanf("%f %f", &num1, &num2);

    switch (opcao) {
        case 1:
            resultado = num1 + num2;
            printf("Resultado da adicao: %.2f\n", resultado);
            break;

        case 2:
            resultado = num1 - num2;
            printf("Resultado da subtracao: %.2f\n", resultado);
            break;

        case 3:
            resultado = num1 * num2;
            printf("Resultado da multiplicacao: %.2f\n", resultado);
            break;

        case 4:
            if (num2 == 0) {
                printf("Nao e possivel dividir por zero.\n");
            } else {
                resultado = num1 / num2;
                printf("Resultado da divisao: %.2f\n", resultado);
            }
            break;

        default:
            printf("Opcao invalida.\n");
            break;
    }

    return 0;
}
