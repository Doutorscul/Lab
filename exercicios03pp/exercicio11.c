11- #include <stdio.h>

int main() {
    int i;
    int n; 

    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    printf("Numeros naturais de 0 ate %d em ordem crescente:\n", n);
    for (i = 0; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
