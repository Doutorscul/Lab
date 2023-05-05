#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i;

    printf("Digite uma palavra em letras maiusculas: ");
    scanf("%s", palavra);

    for (i = 0; i < strlen(palavra); i++) {
        if (palavra[i] >= 65 && palavra[i] <= 90) { 
            palavra[i] = palavra[i] + 32;
        }
    }

    printf("A palavra em letras minusculas e: %s\n", palavra);

    return 0;
}
