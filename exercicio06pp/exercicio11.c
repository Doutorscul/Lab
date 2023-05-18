#include <stdio.h>

struct Aluno {
    char nome[50];
    int matricula;
    float mediaFinal;
};

int main() {
    struct Aluno alunos[10];
    struct Aluno aprovados[10], reprovados[10];
    int numAprovados = 0, numReprovados = 0;

    for (int i = 0; i < 10; i++) {
        printf("Aluno %d:\n", i+1);

        printf("Nome: ");
        scanf("%s", alunos[i].nome);

        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Média Final: ");
        scanf("%f", &alunos[i].mediaFinal);

        printf("\n");
    }

    for (int i = 0; i < 10; i++) {
        if (alunos[i].mediaFinal >= 5.0) {
            aprovados[numAprovados] = alunos[i];
            numAprovados++;
        } else {
            reprovados[numReprovados] = alunos[i];
            numReprovados++;
        }
    }
    printf("Alunos Aprovados:\n");
    for (int i = 0; i < numAprovados; i++) {
        printf("Nome: %s\n", aprovados[i].nome);
        printf("Matrícula: %d\n", aprovados[i].matricula);
        printf("Média Final: %.2f\n\n", aprovados[i].mediaFinal);
    }
    printf("Alunos Reprovados:\n");
    for (int i = 0; i < numReprovados; i++) {
        printf("Nome: %s\n", reprovados[i].nome);
        printf("Matrícula: %d\n", reprovados[i].matricula);
        printf("Média Final: %.2f\n\n", reprovados[i].mediaFinal);
    }

    return 0;
}
