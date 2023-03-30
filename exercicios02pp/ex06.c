#include <stdio.h>
#include <stdio.h>

int main() {
   int num1, num2, diferenca;

   printf("Digite dois números inteiros: ");
   scanf("%d %d", &num1, &num2);

   if (num1 > num2) {
      printf("O maior número é %d\n", num1);
      diferenca = num1 - num2;
   } else {
      printf("O maior número é %d\n", num2);
      diferenca = num2 - num1;
   }

   printf("A diferença entre os números é %d\n", diferenca);

   return 0;
}
