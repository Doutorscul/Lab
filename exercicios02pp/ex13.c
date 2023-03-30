#include <stdio.h>
#include <stdio.h>

int main() {
    float nota1, nota2, nota3, media;
    printf("Digite a nota da primeira prova: ");
    scanf("%f", &nota1);
    printf("Digite a nota da segunda prova: ");
    scanf("%f", &nota2);
    printf("Digite a nota da terceira prova: ");
    scanf("%f", &nota3);

    media = (nota1 + nota2 + (nota3 * 2)) / 4;

    if (media >= 60) {
        printf("Parabéns! Você foi aprovado com média %.2f\n", media);
    } else {
        printf("Infelizmente você foi reprovado com média %.2f\n", media);
    }

    return 0;
}
