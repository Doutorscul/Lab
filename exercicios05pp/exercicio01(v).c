#include <stdio.h>

int main() {
    int A[6] = {1, 0, 5, -2, -5, 7};
    int soma = A[0] + A[1] + A[5];
    printf("Soma entre A[0], A[1] e A[5]: %d\n", soma);
    
    A[4] = 100;

    printf("Vetor A modificado:\n");
    for(int i=0; i<6; i++) {
        printf("%d\n", A[i]);
    }

    return 0;
}