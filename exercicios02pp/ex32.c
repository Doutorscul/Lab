#include <stdio.h>
#include <stdio.h>

int main() {
    int codigo, quantidade;
    float preco, total;

    printf("Código do produto: ");
    scanf("%d", &codigo);

    printf("Quantidade: ");
    scanf("%d", &quantidade);

    switch (codigo) {
        case 100:
            preco = 1.20;
            break;
        case 101:
            preco = 1.30;
            break;
        case 102:
            preco = 1.50;
            break;
        case 103:
            preco = 1.20;
            break;
        case 104:
            preco = 1.70;
            break;
        case 105:
            preco = 2.20;
            break;
        case 106:
            preco = 1.00;
            break;
        default:
            printf("Código inválido!\n");
            return 0;
    }

    total = preco * quantidade;

    printf("Total: R$ %.2f\n", total);

    return 0;
}
