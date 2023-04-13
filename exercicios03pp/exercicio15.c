#include <stdio.h>
#include <math.h> 

int main() {
    double valor; 
    double quadrado, cubo, raizQuadrada; 

    
    while (1) {
        printf("Digite um valor (ou um valor negativo/zero para finalizar): ");
        scanf("%lf", &valor);

        if (valor <= 0) {
            
            break;
        }

       
        quadrado = valor * valor;
        cubo = valor * valor * valor;
        raizQuadrada = sqrt(valor);

       
        printf("Valor: %.2lf\n", valor);
        printf("Quadrado: %.2lf\n", quadrado);
        printf("Cubo: %.2lf\n", cubo);
        printf("Raiz Quadrada: %.2lf\n", raizQuadrada);
        printf("\n");
    }

    return 0;
}
