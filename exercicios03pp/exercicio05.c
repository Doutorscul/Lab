#include <stdio.h>

int main() {
    int valores[10]; 
    int soma = 0;    
    int i;            

    
    printf("Digite 10 valores:\n");
    for (i = 0; i < 10; i++) {
        printf("Valor %d: ", i + 1);
        scanf("%d", &valores[i]);  // Ler o valor digitado e armazená-lo no array
    }

    
    for (i = 0; i < 10; i++) {
        soma += valores[i];
    }

    
    printf("A soma dos 10 valores é: %d\n", soma);

    return 0;
}
