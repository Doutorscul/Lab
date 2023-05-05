#include <stdio.h>
#include <string.h>

int main() {
    char S[100]; 
    int i, j;

    printf("Digite a string S: ");
    fgets(S, 100, stdin);

    printf("Digite o valor de i: ");
    scanf("%d", &i);

    printf("Digite o valor de j: ");
    scanf("%d", &j); 

    if (i > j || j >= strlen(S)) {
        printf("Segmento invalido!\n");
    } else {
        printf("Segmento S[%d..%d]: ", i, j);
        for (int k = i; k <= j; k++) { 
            printf("%c", S[k]);
        }
        printf("\n");
    }

    return 0;
}
