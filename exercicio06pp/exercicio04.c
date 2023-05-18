 #include <stdio.h>

struct Aluno {
    int matricula;
    char nome[50];
    float nota1;
    float nota2;
    float nota3;
};

int main() {
    struct Aluno alunos[5];
    int i;
    float maiorNota1 = -1;
    int alunoMaiorNota1;
    float maiorMedia = -1;
    int alunoMaiorMedia;
    float menorMedia = 100;
    int alunoMenorMedia;

    printf("Digite os dados dos alunos:\n");
    for (i = 0; i < 5; i++) {
        printf("\nAluno %d:\n", i + 1);
        printf("Matrícula: ");
        scanf("%d", &alunos[i].matricula);

        printf("Nome: ");
        scanf(" %[^\n]s", alunos[i].nome);

        printf("Nota da primeira prova: ");
        scanf("%f", &alunos[i].nota1);

        printf("Nota da segunda prova: ");
        scanf("%f", &alunos[i].nota2);

        printf("Nota da terceira prova: ");
        scanf("%f", &alunos[i].nota3);

        if (alunos[i].nota1 > maiorNota1) {
            maiorNota1 = alunos[i].nota1;
            alunoMaiorNota1 = i;
        }

        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        if (media > maiorMedia) {
            maiorMedia = media;
            alunoMaiorMedia = i;
        }

        if (media < menorMedia) {
            menorMedia = media;
            alunoMenorMedia = i;
        }
    }

    printf("\nAluno com maior nota na primeira prova:\n");
    printf("Nome: %s\n", alunos[alunoMaiorNota1].nome);
    printf("Matrícula: %d\n", alunos[alunoMaiorNota1].matricula);
    printf("Nota: %.2f\n", alunos[alunoMaiorNota1].nota1);

    printf("\nAluno com maior média geral:\n");
    printf("Nome: %s\n", alunos[alunoMaiorMedia].nome);
    printf("Matrícula: %d\n", alunos[alunoMaiorMedia].matricula);
    printf("Média: %.2f\n", (alunos[alunoMaiorMedia].nota1 + alunos[alunoMaiorMedia].nota2 + alunos[alunoMaiorMedia].nota3) / 3);

    printf("\nAluno com menor média geral:\n");
    printf("Nome: %s\n", alunos[alunoMenorMedia].nome);
    printf("Matrícula: %d\n", alunos[alunoMenorMedia].matricula);
    printf("Média: %.2f\n", (alunos[aluno
    printf("\nStatus de Aprovação:\n");
    for (i = 0; i < 5; i++) {
        float media = (alunos[i].nota1 + alunos[i].nota2 + alunos[i].nota3) / 3;
        printf("\nAluno %d:\n", i + 1);
        printf("Nome: %s\n", alunos[i].nome);
        printf("Matrícula: %d\n", alunos[i].matricula);
        printf("Média: %.2f\n", media);
        if (media >= 6) {
            printf("Situação: Aprovado\n");
        } else {
            printf("Situação: Reprovado\n");
        }
    }

    return 0;
}