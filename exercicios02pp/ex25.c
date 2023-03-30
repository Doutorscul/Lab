#include <stdio.h>
#include <math.h>

int main() {
   float a, b, c, delta, x1, x2;

   printf("Digite os valores de a, b e c: ");
   scanf("%f %f %f", &a, &b, &c);

   if (a == 0) {
      printf("Não é equação de segundo grau.\n");
   } else {
      delta = b * b - 4 * a * c;

      if (delta < 0) {
         printf("Não existe raiz.\n");
      } else if (delta == 0) {
         x1 = -b / (2 * a);
         printf("Raiz única: x = %.2f\n", x1);
      } else {
         x1 = (-b + sqrt(delta)) / (2 * a);
         x2 = (-b - sqrt(delta)) / (2 * a);
         printf("As raízes da equação são: x1 = %.2f e x2 = %.2f\n", x1, x2);
      }
   }

   return 0;
}
