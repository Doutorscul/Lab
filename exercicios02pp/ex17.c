#include <stdio.h>
#include <stdio.h>

int main() {
    float baseMaior, baseMenor, altura, area;

    printf("Digite a base maior do trapézio: ");
    scanf("%f", &baseMaior);

    printf("Digite a base menor do trapézio: ");
    scanf("%f", &baseMenor);

    printf("Digite a altura do trapézio: ");
    scanf("%f", &altura);

    area = (baseMaior + baseMenor) * altura / 2;

    printf("A área do trapézio é: %.2f\n", area);

    return 0;
}
