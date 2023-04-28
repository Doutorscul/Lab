**Questão 23***

#include <stdio.h>

void gerar_triangulo_lateral(int n) {
  int i, j;

  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }

  for (i = n-1; i >= 1; i--) {
    for (j = 1; j <= i; j++) {
      printf("*");
    }
    printf("\n");
  }
}

int main() {
  int n;
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);
  gerar_triangulo_lateral(n);
  return 0;
}
