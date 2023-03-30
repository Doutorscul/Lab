#include <stdio.h>
#include <math.h>

int main() {
   float num;

   printf("Digite um número: ");
   scanf("%f", &num);

   if (num > 0) {
      printf("O número digitado ao quadrado é: %f\n", pow(num, 2));
      printf("A raiz quadrada do número digitado é: %f\n", sqrt(num));
   } else {
      printf("O número é negativo ou zero, não é possível calcular a raiz quadrada ou o quadrado\n");
   }

   return 0;
}
