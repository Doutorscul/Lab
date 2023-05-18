#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    char curso[50];
};

int main() {
    struct Aluno alunos[5];

    printf("Digite os dados dos alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: ");
        fgets(alunos[i].nome, 50, stdin);

        printf("Matricula: ");
        scanf("%d", &alunos[i].matricula);
        while (getchar() != '\n');

        printf("Curso: ");
        fgets(alunos[i].curso, 50, stdin);
    }
    printf("\nDados dos Alunos:\n");
    for (int i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s", alunos[i].nome);
        printf("Matricula: %d\n", alunos[i].matricula);
        printf("Curso: %s", alunos[i].curso);
    }
    return 0;
}
