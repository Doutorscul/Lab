#include <stdio.h>

void desenha_linha(int quantidade) {
  int i;
  for (i = 0; i < quantidade; i++) {
    printf("=");
  }
  printf("\n");
}

int main() {
  desenha_linha(10); 
  return 0;
}
