 #include <stdio.h>

double converterCelsiusParaFahrenheit(double celsius);

int main() {
   double celsius;
   printf("Digite a temperatura em graus Celsius: ");
   scanf("%lf", &celsius);

   double fahrenheit = converterCelsiusParaFahrenheit(celsius);
   printf("%.2f graus Celsius equivalem a %.2f graus Fahrenheit.\n", celsius, fahrenheit);

   return 0;
}