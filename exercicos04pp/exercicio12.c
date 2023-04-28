 #include <stdio.h>

int soma_digitos(int num) {
    if (num <= 0) {
        printf("Número inválido\n");
        return 0;
    }
    int soma = 0;
    while (num > 0) {
        soma += num % 10;  
        num /= 10;  
    }
    return soma;
}

int main() {
    int num;
    printf("Digite um número inteiro maior que zero: ");
    scanf("%d", &num);
    int soma = soma_digitos(num);
    printf("A soma dos dígitos é: %d\n", soma);
    return 0;
}