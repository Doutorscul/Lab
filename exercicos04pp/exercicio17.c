#include <stdio.h>

int soma_entre_numeros(int num1, int num2) {
  int soma = 0;
  int i;
  for (i = num1 + 1; i < num2; i++) {
    soma += i;
  }
  return soma;
}

int main() {
  int num1, num2;
  printf("Digite o primeiro numero: ");
  scanf("%d", &num1);
  printf("Digite o segundo numero: ");
  scanf("%d", &num2);
  int resultado = soma_entre_numeros(num1, num2);
  printf("A soma dos numeros entre %d e %d eh: %d\n", num1, num2, resultado);
  return 0;
}
