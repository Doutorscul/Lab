11- #include <stdio.h>

int main() {
    int i; // Variável de controle para o loop
    int n; // Variável para armazenar o valor de N

    // Ler o valor de N
    printf("Digite um numero inteiro positivo N: ");
    scanf("%d", &n);

    // Exibir os números naturais de 0 até N em ordem crescente
    printf("Numeros naturais de 0 ate %d em ordem crescente:\n", n);
    for (i = 0; i <= n; i++) {
        printf("%d\n", i);
    }

    return 0;
}
