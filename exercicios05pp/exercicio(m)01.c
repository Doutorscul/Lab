#include <stdio.h>

int main() {
   char str[100];
   
   printf("Digite uma string: ");
   gets(str);
   
   printf("A string digitada foi: %s", str);
   
   return 0;
}
