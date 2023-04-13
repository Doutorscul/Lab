#include <stdio.h>

int main() {
    int n;  
    int i;

    printf("Digite um numero inteiro N: ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Erro: N deve ser um numero inteiro positivo maior que zero.\n");
        return 1; 
    }

    
    printf("Os primeiros %d numeros naturais impares sao: ", n);
    for (i = 1; i <= n; i++) {
        printf("%d ", 2 * i - 1); // Fórmula para calcular números ímpares: 2*i - 1
    }
    printf("\n");

    return 0;
}
