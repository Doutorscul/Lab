#include <stdio.h>
#include <stdio.h>

int main() {
   float salario, prestacao;

   printf("Digite o salário do trabalhador: ");
   scanf("%f", &salario);

   printf("Digite o valor da prestação do empréstimo: ");
   scanf("%f", &prestacao);

   if (prestacao > salario * 0.2) {
      printf("Empréstimo não concedido\n");
   } else {
      printf("Empréstimo concedido\n");
   }

   return 0;
}
