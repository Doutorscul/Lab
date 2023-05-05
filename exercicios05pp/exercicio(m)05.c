#include <stdio.h>

int main() {
    int matriz[10][10], i, j;
    
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            if (i < j) {
                matriz[i][j] = 2*i + 7*j - 2;
            } else if (i == j) {
                matriz[i][j] = 3*i*i - 1;
            } else {
                matriz[i][j] = 4*i*i*i - 5*j*j + 1;
            }
        }
    }
    
    printf("Matriz gerada:\n");
    for (i = 0; i < 10; i++) {
        for (j = 0; j < 10; j++) {
            printf("%5d", matriz[i][j]);
        }
        printf("\n");
    }
    
    return 0;
}
