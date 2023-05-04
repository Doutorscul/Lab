#include <stdio.h>

int main() {
    int numeros[10], num, repetido;
    printf("Digite 10 numeros diferentes:\n");
    for(int i = 0; i < 10; i++) {
        do {
            repetido = 0; 
            scanf("%d", &num);
            for(int j = 0; j < i; j++) {
                if(num == numeros[j]) {
                    repetido = 1;
                    printf("Este número já foi digitado. Digite outro número:\n");
                    break;
                }
            }
        } while(repetido);
        numeros[i] = num;
    }
    printf("Os numeros digitados foram: ");
    for(int i = 0; i < 10; i++) {
        printf("%d ", numeros[i]);
    }
    printf("\n");
    return 0;
}
