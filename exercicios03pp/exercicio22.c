#include <stdio.h>


int ehPalindromo(int numero) {
    int numeroOriginal = numero;
    int numeroInvertido = 0;

    
    while (numero > 0) {
        int digito = numero % 10;
        numeroInvertido = numeroInvertido * 10 + digito;
        numero /= 10;
    }

    
    if (numeroOriginal == numeroInvertido) {
        return 1; 
    } else {
        return 0; 
    }
}

int main() {
    int maiorPalindromo = 0;

    
    for (int i = 100; i <= 999; i++) {
        for (int j = i; j <= 999; j++) {
            int produto = i * j;
            if (ehPalindromo(produto) && produto > maiorPalindromo) {
                maiorPalindromo = produto;
            }
        }
    }

    
    printf("O maior número palíndromo feito a partir do produto de dois números de 3 dígitos é: %d\n", maiorPalindromo);

    return 0;
}
