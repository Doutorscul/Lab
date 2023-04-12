#include <stdio.h>

int main() {
    int valor_saque; 
    int notas_100 = 0, notas_50 = 0, notas_20 = 0, notas_10 = 0, notas_5 = 0, notas_2 = 0, notas_1 = 0;

    
    printf("Digite o valor do saque em reais: ");
    scanf("%d", &valor_saque);

  
    while (valor_saque > 0) {
        if (valor_saque >= 100) {
            notas_100++;
            valor_saque -= 100;
        } else if (valor_saque >= 50) {
            notas_50++;
            valor_saque -= 50;
        } else if (valor_saque >= 20) {
            notas_20++;
            valor_saque -= 20;
        } else if (valor_saque >= 10) {
            notas_10++;
            valor_saque -= 10;
        } else if (valor_saque >= 5) {
            notas_5++;
            valor_saque -= 5;
        } else if (valor_saque >= 2) {
            notas_2++;
            valor_saque -= 2;
        } else {
            notas_1++;
            valor_saque -= 1;
        }
    }

    
    printf("Quantidade de notas:\n");
    printf("Notas de 100: %d\n", notas_100);
    printf("Notas de 50: %d\n", notas_50);
    printf("Notas de 20: %d\n", notas_20);
    printf("Notas de 10: %d\n", notas_10);
    printf("Notas de 5: %d\n", notas_5);
    printf("Notas de 2: %d\n", notas_2);
    printf("Notas de 1: %d\n", notas_1);

    return 0;
}
