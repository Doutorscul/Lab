#include <stdio.h>
#include <stdio.h>

int main() {
   float num1, num2;

   printf("Digite dois números: ");
   scanf("%f %f", &num1, &num2);

   if (num1 > num2) {
      printf("O maior número é %.2f\n", num1);
   } else if (num2 > num1) {
      printf("O maior número é %.2f\n", num2);
   } else {
      printf("Números iguais\n");
   }

   return 0;
}
