#include <stdio.h>

int main() {
    int opcao; 
    float num1, num2; 
    float resultado; 

    do {
        
        printf("========= MENU DE OPCOES =========\n");
        printf("1 - Adicao\n");
        printf("2 - Subtracao\n");
        printf("3 - Multiplicacao\n");
        printf("4 - Divisao\n");
        printf("5 - Saida\n");
        printf("===================================\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: 
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 + num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 2: 
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 - num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 3: 
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                resultado = num1 * num2;
                printf("Resultado: %.2f\n", resultado);
                break;
            case 4: 
                printf("Digite o primeiro numero: ");
                scanf("%f", &num1);
                printf("Digite o segundo numero: ");
                scanf("%f", &num2);
                if (num2 == 0) {
                    printf("Erro: divisao por zero nao permitida.\n");
                } else {
                    resultado = num1 / num2;
                    printf("Resultado: %.2f\n", resultado);
                }
                break;
            case 5:
                printf("Encerrando o programa...\n");
                break;
            default:
                printf("Opcao invalida. Tente novamente.\n");
        }

        printf("\n");

    } while (opcao != 5);

    return 0;
}