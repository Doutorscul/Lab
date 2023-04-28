4- #include <stdio.h>

int main() {
    int contador = 0; 

    while (contador <= 100000) {
        printf("%d\n", contador);  
        contador += 1000;  
    }

    return 0;
}