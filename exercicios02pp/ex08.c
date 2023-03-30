#include <stdio.h>
#include <stdio.h>

int main() {
   float nota1, nota2, media;

   printf("Digite a primeira nota: ");
   scanf("%f", &nota1);

   if (nota1 < 0  nota1 > 10) {
      printf("A primeira nota é inválida. O programa será encerrado.\n");
      return 0;
   }

   printf("Digite a segunda nota: ");
   scanf("%f", &nota2);

   if (nota2 < 0  nota2 > 10) {
      printf("A segunda nota é inválida. O programa será encerrado.\n");
      return 0;
   }

   media = (nota1 + nota2) / 2;
   printf("A média das notas é %.2f\n", media);

   return 0;
}
