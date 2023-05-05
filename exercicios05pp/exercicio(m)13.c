#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char str[100];
    int i, j, len;
    int palindromo = 1;
    
    printf("Digite uma palavra ou frase: ");
    fgets(str, 100, stdin);
    
    
    for (i = j = 0; str[i]; i++) {
        if (isalpha(str[i])) {
            str[j++] = tolower(str[i]);
        }
    }
    str[j] = '\0';
    
    len = strlen(str);
    for (i = 0, j = len - 1; i < len / 2; i++, j--) {
        if (str[i] != str[j]) {
            palindromo = 0;
            break;
        }
    }
    
    if (palindromo) {
        printf("A string '%s' e um palindromo\n", str);
    } else {
        printf("A string '%s' nao e um palindromo\n", str);
    }
    
    return 0;
}
