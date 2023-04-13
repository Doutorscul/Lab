#include <stdio.h>
#include <stdbool.h>

#define LIMITE 2000000

int main() {
   
    bool numeros[LIMITE + 1];
    for (int i = 2; i <= LIMITE; i++) {
        numeros[i] = true;
    }

   
    for (int i = 2; i * i <= LIMITE; i++) {
        if (numeros[i]) {
            for (int j = i * i; j <= LIMITE; j += i) {
                numeros[j] = false;
            }
        }
    }

    
    for (int i = 2; i <= LIMITE; i++) {
        if (numeros[i]) {
            soma += i;
        }
    }

   
    printf("A soma de todos os números primos abaixo de %d é: %lld\n", LIMITE, soma);

    return 0;
}
