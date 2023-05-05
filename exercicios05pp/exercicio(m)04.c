#include <stdio.h>

int main() {
    int matriz[5][5], x, linha = -1, coluna = -1, i, j;
    
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
   
    printf("Digite o valor a ser procurado: ");
    scanf("%d", &x);
    
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] == x) {
                linha = i;
                coluna = j;
                break;
            }
        }
        if (linha != -1 && coluna != -1) {
            break;
        }
    }
    
    
    if (linha != -1 && coluna != -1) {
        printf("O valor %d foi encontrado na linha %d e coluna %d.", x, linha, coluna);
    } else {
        printf("O valor %d não foi encontrado na matriz.", x);
    }
    
    return 0;
}
