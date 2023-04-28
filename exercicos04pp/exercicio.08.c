#include <stdio.h>

double calcularHipotenusa(double a, double b);

int main() {
   double a, b;
   printf("Digite os valores dos catetos a e b do triangulo: ");
   scanf("%lf %lf", &a, &b);

   double hipotenusa = calcularHipotenusa(a, b);
   printf("A hipotenusa do triangulo com catetos %.2f e %.2f e igual a %.2f.\n", a, b, hipotenusa);

   return 0;
}