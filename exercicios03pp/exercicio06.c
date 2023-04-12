#include <stdio.h>

int main() {
    int numeros[10];   
    int soma = 0;    
    float media;      
    int i;            

   
    printf("Digite 10 numeros inteiros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);  
    }

    
    for (i = 0; i < 10; i++) {
        soma += numeros[i];  
    }

   
    media = (float) soma / 10;  /

   
    printf("A media dos 10 numeros e: %.2f\n", media);

    return 0;
}
