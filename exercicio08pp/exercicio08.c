#include <stdio.h>

int main() {
    int numeros[6];
    int *ptr;

    printf("Digite seis números:\n");
    for (int i = 0; i < 6; i++) {
        scanf("%d", &numeros[i]);
    }

    ptr = numeros; 

    printf("Valores do vetor:\n");
    for (int i = 0; i < 6; i++) {
        printf("%d ", *(ptr + i)); 
    }
    printf("\n");

    printf("Endereços de memória:\n");
    for (int i = 0; i < 6; i++) {
        printf("%p ", (ptr + i));
    }
    printf("\n");

    return 0;
}
