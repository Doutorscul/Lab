 #include <stdio.h>

int main() {
    int contador = 10;  // Variável de controle para a contagem regressiva

    while (contador >= 0) {
        printf("%d\n", contador);  // Mostrar o número na tela
        contador--; 

    printf("FIM!\n");  

    return 0;
}
4- #include <stdio.h>

int main() {
    int contador = 0;  

    while (contador <= 100000) {
        printf("%d\n", contador);  
        contador += 1000;  
    }

    return 0;
}
