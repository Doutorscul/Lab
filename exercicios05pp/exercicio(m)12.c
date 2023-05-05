#include <stdio.h>
#include <string.h>

void cesar(char* str) {
    int i, len;
    len = strlen(str);
    
    for (i = 0; i < len; i++) {
        if (str[i] >= 'a' && str[i] <= 'z') {
            str[i] = ((str[i] - 'a' + 3) % 26) + 'a';
        }
        else if (str[i] >= 'A' && str[i] <= 'Z') {
            str[i] = ((str[i] - 'A' + 3) % 26) + 'A';
        }
    }
}

int main() {
    char str[100];
    printf("Digite uma string: ");
    fgets(str, 100, stdin);
    str[strcspn(str, "\n")] = 0;
    
    cesar(str);
    
    printf("Nova string: %s\n", str);
    return 0;
}
