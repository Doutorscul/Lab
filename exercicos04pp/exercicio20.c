#include <stdio.h>
#include <stdbool.h>

bool eh_primo(int num) {
  if (num < 2) {
    return false;
  }
  int i;
  for (i = 2; i < num; i++) {
    if (num % i == 0) {
      return false;
    }
  }
  return true;
}

int quantidade_primos_abaixo_de_n(int n) {
  int quantidade = 0;
  int i;
  for (i = 2; i < n; i++) {
    if (eh_primo(i)) {
      quantidade++;
    }
  }
  return quantidade;
}

int main() {
  int n;
  printf("Digite um numero inteiro positivo: ");
  scanf("%d", &n);
  int quantidade = quantidade_primos_abaixo_de_n(n);
  printf("Existem %d numeros primos abaixo de %d\n", quantidade, n);
  return 0;
}
