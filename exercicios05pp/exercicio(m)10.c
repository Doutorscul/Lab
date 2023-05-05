#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define DESCONTO 0.1 

int main() {
    char nome[50];
    float valor, valor_desconto, valor_vista;

    printf("Digite o nome da mercadoria: ");
    fgets(nome, 50, stdin);
    printf("Digite o valor da mercadoria: ");
    scanf("%f", &valor);

    valor_desconto = valor * DESCONTO;
    valor_vista = valor - valor_desconto;

    printf("\nMercadoria: %sValor total: R$ %.2f\nValor do desconto: R$ %.2f\nValor a vista: R$ %.2f\n",
           nome, valor, valor_desconto, valor_vista);

    return 0;
}
