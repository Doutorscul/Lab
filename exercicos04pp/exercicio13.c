#include <stdio.h>

float calculadora(float num1, float num2, char operador) {
    float resultado;
    switch (operador) {
        case '+':
            resultado = num1 + num2;
            break;
        case '-':
            resultado = num1 - num2;
            break;
        case '*':
            resultado = num1 * num2;
            break;
        case '/':
            if (num2 == 0) {
                printf("Erro: divisão por zero\n");
                resultado = 0;
            } else {
                resultado = num1 / num2;
            }
            break;
        default:
            printf("Operador inválido\n");
            resultado = 0;
            break;
    }
    return resultado;
}

int main() {
    float num1, num2, resultado;
    char operador;
    printf("Digite dois números: ");
    scanf("%f %f", &num1, &num2);
    printf("Digite o operador (+, -, *, /): ");
    scanf(" %c", &operador);
    resultado = calculadora(num1, num2, operador);
    printf("Resultado: %.2f\n", resultado);
    return 0;
}