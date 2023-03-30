#include <stdio.h>
#include <math.h>

int main() {
    int x, y, z;
    float media;

    printf("Digite três números inteiros positivos: ");
    scanf("%d %d %d", &x, &y, &z);

    media = cbrt(x * y * z);
    printf("A média geométrica de %d, %d e %d é: %.2f", x, y, z, media);

    return 0;
}
