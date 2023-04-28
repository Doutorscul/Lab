#include <stdio.h>

int fatorial(int n) {
  int resultado = 1;
  int i;
  for (i = 1; i <= n; i++) {
    resultado *= i;
  }
  return resultado;
}

int main() {
  int n;
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);
  int resultado = fatorial(n);
  printf("%d! = %d\n", n, resultado);
  return 0;
}
