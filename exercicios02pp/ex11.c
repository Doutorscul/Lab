#include <stdio.h>
#include <stdio.h>

int main() {
   int num, soma = 0;

   printf("Digite um número inteiro maior que zero: ");
   scanf("%d", &num);

   if (num <= 0) {
      printf("Número inválido\n");
      return 0;
   }

   while (num > 0) {
      soma += num % 10;
      num /= 10;
   }

   printf("A soma dos algarismos é %d\n", soma);

   return 0;
}
