#include <stdio.h>
#include <string.h>

int main() {
    char str[100];
    int count = 0, i;
    
    printf("Digite uma string: ");
    gets(str);
    
    for (i = 0; i < strlen(str); i++) {
        if (str[i] == '1') {
            count++;
        }
    }
    
    printf("O número de ocorrências de 1 na string é: %d", count);
    
    return 0;
}
