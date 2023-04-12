#include <stdio.h>
#include <math.h> 

int main() {
    double valor; // valor lido
    double quadrado, cubo, raizQuadrada; // variáveis para armazenar os resultados

    // Loop para leitura dos valores
    while (1) {
        printf("Digite um valor (ou um valor negativo/zero para finalizar): ");
        scanf("%lf", &valor);

        if (valor <= 0) {
            // Se valor for negativo ou zero, finaliza o loop
            break;
        }

        // Cálculos
        quadrado = valor * valor;
        cubo = valor * valor * valor;
        raizQuadrada = sqrt(valor);

        // Exibição dos resultados
        printf("Valor: %.2lf\n", valor);
        printf("Quadrado: %.2lf\n", quadrado);
        printf("Cubo: %.2lf\n", cubo);
        printf("Raiz Quadrada: %.2lf\n", raizQuadrada);
        printf("\n");
    }

    return 0;
}
