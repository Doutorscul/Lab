#include <stdio.h>
#include <stdio.h>

int main() {
    float altura, peso;

    printf("Digite a altura da pessoa em metros: ");
    scanf("%f", &altura);

    printf("Digite o peso da pessoa em kg: ");
    scanf("%f", &peso);

    if (altura < 1.2) {
        if (peso <= 60)
            printf("Classificação: A\n");
        else if (peso <= 90)
            printf("Classificação: D\n");
        else
            printf("Classificação: G\n");
    }
    else if (altura <= 1.7) {
        if (peso <= 60)
            printf("Classificação: B\n");
        else if (peso <= 90)
            printf("Classificação: E\n");
        else
            printf("Classificação: H\n");
    }
    else {
        if (peso <= 60)
            printf("Classificação: C\n");
        else if (peso <= 90)
            printf("Classificação: F\n");
        else
            printf("Classificação: I\n");
    }
