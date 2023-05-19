#include <stdio.h>

int main() {
    int var1;
    int var2;

    printf("Endereço de var1: %p\n", &var1);
    printf("Endereço de var2: %p\n", &var2);

    if (&var1 > &var2) {
        printf("O maior endereço é: %p\n", &var1);
    } else {
        printf("O maior endereço é: %p\n", &var2);
    }

    return 0;
}
