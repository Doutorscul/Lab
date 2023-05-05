#include <stdio.h>
#include <string.h>
#include <ctype.h>

#define MAX 100

int main() {
    char palavra[MAX];
    char substituto;
    int i, vogais = 0, tam;
    
    printf("Digite uma palavra: ");
    scanf("%s", palavra);
    
    tam = strlen(palavra);
    
    for (i = 0; i < tam; i++) {
        switch(tolower(palavra[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                vogais++;
                palavra[i] = substituto;
                break;
            default:
                break;
        }
    }
    
    printf("A palavra tem %d vogais.\n", vogais);
    printf("Digite um caractere para substituir as vogais: ");
    scanf(" %c", &substituto);
    
    for (i = 0; i < tam; i++) {
        switch(tolower(palavra[i])) {
            case 'a':
            case 'e':
            case 'i':
            case 'o':
            case 'u':
                palavra[i] = substituto;
                break;
            default:
                break;
        }
    }
    
    printf("Palavra com vogais substituidas: %s\n", palavra);
    
    return 0;
}
