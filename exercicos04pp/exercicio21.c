#include <stdio.h>

void gerar_exclamacoes(int n) {
  int i, j;
  for (i = 1; i <= n; i++) {
    for (j = 1; j <= i; j++) {
      printf("!");
    }
    printf("\n");
  }
}

int main() {
  int n;
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);
  gerar_exclamacoes(n);
  return 0;
}
