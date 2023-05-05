#include <stdio.h>
#include <string.h>

int main() {
    char str[100], l1, l2;
    int i;

    printf("Digite uma string: ");
    fgets(str, 100, stdin);

    printf("Digite a letra que deseja substituir: ");
    scanf("%c", &l1);

    getchar();  

    printf("Digite a letra que substituira a letra %c: ", l1);
    scanf("%c", &l2);

    for (i = 0; i < strlen(str); i++) {
        if (str[i] == l1) {  
            str[i] = l2;  
        }
    }

    printf("A nova string e: %s\n", str);

    return 0;
}
