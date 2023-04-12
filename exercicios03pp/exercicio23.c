#include <stdio.h>

int main() {
    int n;

    
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &n);

    int num = 1; 
    int linha, coluna;

   
    for (linha = 1; linha <= n; linha++) {
        for (coluna = 1; coluna <= linha; coluna++) {
            printf("%d ", num);
            num++;
        }
        printf("\n");
    }

    return 0;
}
