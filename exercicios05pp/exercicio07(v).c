#include <stdio.h>

int main() {
    int num, somaPares = 0, contImpares = 0;
    printf("Digite 6 numeros inteiros:\n");
    for(int i = 0; i < 6; i++) {
        scanf("%d", &num);
        if(num % 2 == 0) { 
            printf("%d é par\n", num);
            somaPares += num;
        } else { 
            printf("%d é ímpar\n", num);
            contImpares++;
        }
    }
    printf("A soma dos números pares é: %d\n", somaPares);
    printf("A quantidade de números ímpares é: %d\n", contImpares);
    return 0;
}
