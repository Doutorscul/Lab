#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define N 4

int main() {
    int matriz[N][N];
    int i, j;
    
    srand(time(NULL));
    

    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            matriz[i][j] = rand() % 20 + 1;
        }
    }
    
    printf("Matriz original:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    for (i = 0; i < N; i++) {
        for (j = i + 1; j < N; j++) {
            matriz[i][j] = 0;
        }
    }
    
    printf("\nMatriz transformada:\n");
    for (i = 0; i < N; i++) {
        for (j = 0; j < N; j++) {
            printf("%3d ", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
