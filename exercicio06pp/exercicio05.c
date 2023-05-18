#include <stdio.h>

struct vetor {
    float a;
    float b;
    float c;
};

struct vetor somaVetores(struct vetor v1, struct vetor v2) {
    struct vetor resultado;

    resultado.a = v1.a + v2.a;
    resultado.b = v1.b + v2.b;
    resultado.c = v1.c + v2.c;

    return resultado;
}

int main() {
    struct vetor v1, v2, resultado;

    printf("Digite as coordenadas do primeiro vetor:\n");
    printf("a: ");
    scanf("%f", &v1.a);
    printf("b: ");
    scanf("%f", &v1.b);
    printf("c: ");
    scanf("%f", &v1.c);

    printf("\nDigite as coordenadas do segundo vetor:\n");
    printf("a: ");
    scanf("%f", &v2.a);
    printf("b: ");
    scanf("%f", &v2.b);
    printf("c: ");
    scanf("%f", &v2.c);

    resultado = somaVetores(v1, v2);

    printf("\nResultado da soma dos vetores:\n");
    printf("a: %.2f\n", resultado.a);
    printf("b: %.2f\n", resultado.b);
    printf("c: %.2f\n", resultado.c);

    return 0;
}
