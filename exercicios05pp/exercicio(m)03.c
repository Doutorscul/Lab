#include <stdio.h>
#include <string.h>

#define MAX 100

int main() {
    char palavra[MAX];
    int i, tam;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    tam = strlen(palavra);
    
    printf("Palavra invertida: ");
    for (i = tam - 1; i >= 0; i--) {
        printf("%c", palavra[i]);
    }
    printf("\n");
    
    return 0;
}
