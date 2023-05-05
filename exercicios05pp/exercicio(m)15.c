#include <stdio.h>
#include <string.h>

int main() {
    char str1[21], str2[21], c1, c2, c;
    int op, n, pos, tam, i, count;

    str1[0] = '\0';

    do {
        printf("\nMENU\n");
        printf("1. Ler string S1\n");
        printf("2. Imprimir tamanho da string S1\n");
        printf("3. Comparar S1 com uma nova string S2\n");
        printf("4. Concatenar S1 com uma nova string S2\n");
        printf("5. Imprimir S1 de forma reversa\n");
        printf("6. Contar quantidade de vezes que um caractere aparece em S1\n");
        printf("7. Substituir a primeira ocorrência de um caractere por outro em S1\n");
        printf("8. Verificar se S2 é substring de S1\n");
        printf("9. Retornar uma substring de S1\n");
        printf("0. Sair\n");
        printf("Digite a opcao desejada: ");
        scanf("%d", &op);

        switch (op) {
            case 1:
                printf("Digite a string S1 (tamanho maximo 20 caracteres): ");
                scanf("%20s", str1);
                break;
            case 2:
                printf("O tamanho da string S1 e: %d\n", strlen(str1));
                break;
            case 3:
                printf("Digite a nova string S2 (tamanho maximo 20 caracteres): ");
                scanf("%20s", str2);
                if (strcmp(str1, str2) == 0) {
                    printf("As strings S1 e S2 sao iguais\n");
                } else {
                    printf("As strings S1 e S2 sao diferentes\n");
                }
                break;
            case 4:
                printf("Digite a nova string S2 (tamanho maximo 20 caracteres): ");
                scanf("%20s", str2);
                n = strlen(str1);
                for (i = 0; i < 20 && str2[i] != '\0' && n + i < 20; i++) {
                    str1[n + i] = str2[i];
                }
                str1[n + i] = '\0';
                printf("A string resultante da concatenacao e: %s\n", str1);
                break;
            case 5:
                printf("A string S1 de forma reversa e: ");
                for (i = strlen(str1) - 1; i >= 0; i--) {
                    printf("%c", str1[i]);
                }
                printf("\n");
                break;
            case 6:
                printf("Digite o caractere que deseja contar: ");
                scanf(" %c", &c);
                count = 0;
                for (i = 0; str1[i] != '\0'; i++) {
                    if (str1[i] == c) {
                        count++;
                    }
                }
                printf("O caractere '%c' aparece %d vezes na string S1\n", c, count);
                break;
            case 7:
                printf("Digite o caractere a ser substituido: ");
                scanf(" %c", &c1);
                printf("Digite o novo caractere: ");
                scanf(" %c", &c2);
                for (i = 0; str1[i] != '\0'; i++) {
                    if (str1[i
