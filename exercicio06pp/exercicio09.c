#include <stdio.h>
#include <math.h>

typedef struct {
    float real;
    float imaginaria;
} NumeroComplexo;

NumeroComplexo somar(NumeroComplexo z, NumeroComplexo w) {
    NumeroComplexo resultado;
    resultado.real = z.real + w.real;
    resultado.imaginaria = z.imaginaria + w.imaginaria;
    return resultado;
}

NumeroComplexo subtrair(NumeroComplexo z, NumeroComplexo w) {
    NumeroComplexo resultado;
    resultado.real = z.real - w.real;
    resultado.imaginaria = z.imaginaria - w.imaginaria;
    return resultado;
}

NumeroComplexo multiplicar(NumeroComplexo z, NumeroComplexo w) {
    NumeroComplexo resultado;
    resultado.real = z.real * w.real - z.imaginaria * w.imaginaria;
    resultado.imaginaria = z.real * w.imaginaria + z.imaginaria * w.real;
    return resultado;
}

float modulo(NumeroComplexo z) {
    return sqrt(z.real * z.real + z.imaginaria * z.imaginaria);
}

int main() {
    NumeroComplexo z, w;
    NumeroComplexo resultadoSoma, resultadoSubtracao, resultadoMultiplicacao;
    float moduloZ, moduloW;

    printf("Digite a parte real do número complexo z: ");
    scanf("%f", &z.real);
    printf("Digite a parte imaginária do número complexo z: ");
    scanf("%f", &z.imaginaria);

    printf("Digite a parte real do número complexo w: ");
    scanf("%f", &w.real);
    printf("Digite a parte imaginária do número complexo w: ");
    scanf("%f", &w.imaginaria);
    resultadoSoma = somar(z, w);
    resultadoSubtracao = subtrair(z, w);
    resultadoMultiplicacao = multiplicar(z, w);
    moduloZ = modulo(z);
    moduloW = modulo(w);
    printf("\nSoma: %.2f + %.2fi\n", resultadoSoma.real, resultadoSoma.imaginaria);
    printf("Subtração: %.2f + %.2fi\n", resultadoSubtracao.real, resultadoSubtracao.imaginaria);
    printf("Multiplicação: %.2f + %.2fi\n", resultadoMultiplicacao.real, resultadoMultiplicacao.imaginaria);
    printf("Módulo de z: %.2f\n", moduloZ);
    printf("Módulo de w: %.2f\n", moduloW);

    return 0;
}
