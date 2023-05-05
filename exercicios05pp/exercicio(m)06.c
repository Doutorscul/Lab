#include <stdio.h>
#include <string.h>

int main() {
    char palavra[50];
    int i;

    printf("Digite uma palavra: ");
    scanf("%s", palavra);

    for (i = 0; i < strlen(palavra); i++) {
        if (palavra[i] >= 97 && palavra[i] <= 122) {  
            palavra[i] = palavra[i] - 32; 
        }
    }

    printf("A palavra em letras maiusculas e: %s\n", palavra);

    return 0;
}
