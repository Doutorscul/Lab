#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct Pessoa {
    char nome[50];
    char endereco[100];
    char telefone[15];
};
int comparar_pessoas(const void *a, const void *b) {
    struct Pessoa *p1 = (struct Pessoa *)a;
    struct Pessoa *p2 = (struct Pessoa *)b;
    return strcmp(p1->nome, p2->nome);
}

int main() {
    struct Pessoa pessoas[5];
    for (int i = 0; i < 5; i++) {
        printf("Digite o nome da pessoa %d: ", i+1);
        fgets(pessoas[i].nome, sizeof(pessoas[i].nome), stdin);
        pessoas[i].nome[strcspn(pessoas[i].nome, "\n")] = '\0'; 

        printf("Digite o endereço da pessoa %d: ", i+1);
        fgets(pessoas[i].endereco, sizeof(pessoas[i].endereco), stdin);
        pessoas[i].endereco[strcspn(pessoas[i].endereco, "\n")] = '\0';

        printf("Digite o telefone da pessoa %d: ", i+1);
        fgets(pessoas[i].telefone, sizeof(pessoas[i].telefone), stdin);
        pessoas[i].telefone[strcspn(pessoas[i].telefone, "\n")] = '\0';

        printf("\n");
    }

    qsort(pessoas, 5, sizeof(struct Pessoa), comparar_pessoas);

    printf("Pessoas em ordem alfabética:\n");
    for (int i = 0; i < 5; i++) {
        printf("Nome: %s\n", pessoas[i].nome);
        printf("Endereço: %s\n", pessoas[i].endereco);
        printf("Telefone: %s\n\n", pessoas[i].telefone);
    }

    return 0;
}
