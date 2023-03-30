 #include <stdio.h>
 #include <stdio.h>

int main() {
   float valorProduto, valorFinal;
   int estadoDestino;

   printf("Digite o valor do produto: R$");
   scanf("%f", &valorProduto);

   printf("Digite o estado de destino do produto (1=MG, 2=SP, 3=RJ, 4=MS): ");
   scanf("%d", &estadoDestino);

   switch (estadoDestino) {
      case 1:
         valorFinal = valorProduto * 1.07;
         printf("O preço final do produto em MG é R$%.2f.\n", valorFinal);
         break;
      case 2:
         valorFinal = valorProduto * 1.12;
         printf("O preço final do produto em SP é R$%.2f.\n", valorFinal);
         break;
      case 3:
         valorFinal = valorProduto * 1.15;
         printf("O preço final do produto no RJ é R$%.2f.\n", valorFinal);
         break;
      case 4:
         valorFinal = valorProduto * 1.08;
         printf("O preço final do produto em MS é R$%.2f.\n", valorFinal);
         break;
      default:
         printf("Estado de destino inválido.\n");
         break;
   }

   return 0;
}
