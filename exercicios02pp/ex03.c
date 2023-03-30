#include <stdio.h>
#include <math.h>

int main() {
   float num;

   printf("Digite um número: ");
   scanf("%f", &num);

   if (num < 0) {
      printf("O número ao quadrado é: %f\n", pow(num, 2));
   } else {
      printf("A raiz quadrada de %f é %f\n", num, sqrt(num));
   }

   return 0;
}
