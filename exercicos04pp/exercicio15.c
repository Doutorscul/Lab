#include <stdio.h>

int verificaTriangulo(int a, int b, int c) {
    if (a <= 0 || b <= 0 || c <= 0) {
        return 0;
    }
    if (a + b > c && a + c > b && b + c > a) {
        return 1;
    } else {
        return 0;
    }
}

void tipoTriangulo(int a, int b, int c) {
    if (a == b && b == c) {
        printf("O triangulo e equilatero.\n");
    } else if (a == b || a == c || b == c) {
        printf("O triangulo e isosceles.\n");
    } else {
        printf("O triangulo e escaleno.\n");
    }
}

int main() {
    int a, b, c;
    printf("Digite as medidas dos tres lados do triangulo: ");
    scanf("%d %d %d", &a, &b, &c);
    if (verificaTriangulo(a, b, c)) {
        printf("As medidas formam um triangulo.\n");
        tipoTriangulo(a, b, c);
    } else {
        printf("As medidas nao formam um triangulo.\n");
    }
    return 0;
}
