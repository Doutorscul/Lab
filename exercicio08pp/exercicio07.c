#include <stdio.h>

void swap(int *ptr1, int *ptr2) {
    int temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;
}

int main() {
    int num1, num2, num3;
    int *ptr1, *ptr2, *ptr3;

    printf("Digite o primeiro número: ");
    scanf("%d", &num1);

    printf("Digite o segundo número: ");
    scanf("%d", &num2);

    printf("Digite o terceiro número: ");
    scanf("%d", &num3);

    ptr1 = &num1;
    ptr2 = &num2;
    ptr3 = &num3;

    if (*ptr1 > *ptr2) {
        swap(ptr1, ptr2);
    }
    if (*ptr2 > *ptr3) {
        swap(ptr2, ptr3);
    }
    if (*ptr1 > *ptr2) {
        swap(ptr1, ptr2);
    }

    printf("Números em ordem crescente: %d, %d, %d\n", *ptr1, *ptr2, *ptr3);

    printf("Endereços de memória: %p, %p, %p\n", ptr1, ptr2, ptr3);

    return 0;
}
