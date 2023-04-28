#include <stdio.h>

double calcularVolumeCilindro(double altura, double raio);

int main() {
   double altura, raio;
   printf("Digite a altura e o raio do cilindro circular: ");
   scanf("%lf %lf", &altura, &raio);

   double volume = calcularVolumeCilindro(altura, raio);
   printf("O volume do cilindro circular de altura %.2f e raio %.2f e igual a %.2f.\n", altura, raio, volume);

   return 0;
}