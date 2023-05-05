#include <stdio.h>

int main() {
    int matriz[4][4], maior = matriz[0][0], linha_maior, coluna_maior, i, j;
    
    
    printf("Digite os elementos da matriz 4x4:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
            if (matriz[i][j] > maior) {
                maior = matriz[i][j];
                linha_maior = i;
                coluna_maior = j;
            }
        }
    }
    
    
    printf("\nMatriz digitada:\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            printf("%d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    
    printf("\nO maior valor encontrado foi %d, na linha %d e coluna %d.", maior, linha_maior, coluna_maior);
    
    return 0;
}
