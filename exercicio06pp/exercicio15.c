#include <stdio.h>
#include <string.h>

struct Livro {
    char titulo[31];
    char autor[16];
    int ano;
};

int main() {
    struct Livro livros[5];
    int i;
    printf("Digite os dados dos livros:\n");
    for (i = 0; i < 5; i++) {
        printf("Livro %d:\n", i + 1);
        printf("Título: ");
        scanf("%30[^\n]%*c", livros[i].titulo);
        printf("Autor: ");
        scanf("%15[^\n]%*c", livros[i].autor);
        printf("Ano: ");
        scanf("%d", &livros[i].ano);
    }
    char busca[31];
    printf("\nDigite o título do livro que deseja buscar: ");
    scanf("%30[^\n]%*c", busca);

    printf("\nLivros encontrados com o título '%s':\n", busca);
    int encontrados = 0;
    for (i = 0; i < 5; i++) {
        if (strcmp(livros[i].titulo, busca) == 0) {
            printf("Título: %s\n", livros[i].titulo);
            printf("Autor: %s\n", livros[i].autor);
            printf("Ano: %d\n", livros[i].ano);
            printf("-------------------------\n");
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum livro encontrado com o título '%s'.\n", busca);
    }

    return 0;
}
