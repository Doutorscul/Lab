 #include <stdio.h>

int acharMaior(int num1, int num2);

int main() {
   int num1, num2;
   printf("Digite dois numeros: ");
   scanf("%d %d", &num1, &num2);

   int maior = acharMaior(num1, num2);
   printf("O maior numero digitado foi %d.\n", maior);

   return 0;
}