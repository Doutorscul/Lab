 #include <stdio.h>
 #include <stdio.h>

int main() {
    float a, b, c;

    printf("Digite os valores dos lados do triangulo:\n");
    scanf("%f %f %f", &a, &b, &c);

    if (a < b + c && b < a + c && c < a + b) {
        if (a == b && b == c) {
            printf("Triangulo equilatero.\n");
        } else if (a == b  a == c  b == c) {
            printf("Triangulo isosceles.\n");
        } else {
            printf("Triangulo escaleno.\n");
        }
    } else {
        printf("Nao forma um triangulo.\n");
    }

    return 0;
}
