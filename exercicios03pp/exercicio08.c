 #include <stdio.h>

int main() {
    int numeros[10];  // Array para armazenar os 10 números
    int menor, maior; // Variáveis para armazenar o menor e o maior valor
    int i;            // Variável de controle para o loop

    // Solicitar ao usuário que digite 10 números
    printf("Digite 10 numeros:\n");
    for (i = 0; i < 10; i++) {
        printf("Numero %d: ", i + 1);
        scanf("%d", &numeros[i]);  // Ler o número digitado e armazená-lo no array

        // Verificar se o número é o primeiro lido
        if (i == 0) {
            menor = numeros[i];  // Inicializar a variável menor com o primeiro número lido
            maior = numeros[i];  // Inicializar a variável maior com o primeiro número lido
        } else {
            // Comparar o número lido com o menor valor atual
            if (numeros[i] < menor) {
                menor = numeros[i];  // Atualizar o valor de menor se necessário
            }
            // Comparar o número lido com o maior valor atual
            if (numeros[i] > maior) {
                maior = numeros[i];  // Atualizar o valor de maior se necessário
            }
        }
    }

    // Mostrar o menor e o maior valor lido na tela
    printf("Menor valor lido: %d\n", menor);
    printf("Maior valor lido: %d\n", maior);

    return 0;
}
