#include <stdio.h>
#include <stdio.h>

int main() {
    float trabalho_lab, aval_semestral, exame_final, media;
    printf("Digite a nota do trabalho de laboratório: ");
    scanf("%f", &trabalho_lab);
    printf("Digite a nota da avaliação semestral: ");
    scanf("%f", &aval_semestral);
    printf("Digite a nota do exame final: ");
    scanf("%f", &exame_final);

    media = (trabalho_lab * 2 + aval_semestral * 3 + exame_final * 5) / 10;

    if (media >= 0 && media < 3) {
        printf("Aluno reprovado.\n");
    } else if (media >= 3 && media < 5) {
        printf("Aluno em recuperação.\n");
    } else if (media >= 5 && media <= 10) {
        printf("Aluno aprovado.\n");
    } else {
        printf("Notas inválidas.\n");
    }

    return 0;
}
