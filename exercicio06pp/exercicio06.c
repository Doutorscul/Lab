#include <stdio.h>

typedef struct {
    int matricula;
    char nome[50];
    int codigoDisciplina;
    float nota1;
    float nota2;
} Aluno;

int main() {
    Aluno alunos[10];
    int numAlunos;
    int i;

    printf("Digite o número de alunos (até 10): ");
    scanf("%d", &numAlunos);

    for (i = 0; i < numAlunos; i++) {
        printf("\nAluno %d\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);
        printf("Nome: ");
        scanf("%s", alunos[i].nome);
        printf("Código da Disciplina: ");
        scanf("%d", &alunos[i].codigoDisciplina);
        printf("Nota 1: ");
        scanf("%f", &alunos[i].nota1);
        printf("Nota 2: ");
        scanf("%f", &alunos[i].nota2);
    }

    printf("\nListagem dos Alunos:\n");
    printf("Matrícula\tNome\t\tMédia Final\n");

    for (i = 0; i < numAlunos; i++) {
        float mediaFinal = (alunos[i].nota1 * 1.0 + alunos[i].nota2 * 2.0) / 3.0;
        printf("%d\t\t%s\t\t%.2f\n", alunos[i].matricula, alunos[i].nome, mediaFinal);
    }

    return 0;
}
