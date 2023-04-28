 #include <stdio.h>

float calcularMedia(float nota1, float nota2, float nota3, char tipoMedia);

int main() {
   float nota1, nota2, nota3;
   char tipoMedia;

   printf("Digite as tres notas do aluno: ");
   scanf("%f %f %f", &nota1, &nota2, &nota3);

   printf("Digite A para media aritmetica ou P para media ponderada: ");
   scanf(" %c", &tipoMedia);

   float media = calcularMedia(nota1, nota2, nota3, tipoMedia);
   printf("A media do aluno foi %.2f.\n", media);

   return 0;
}