 #include <stdio.h>

int main() {
    int i; 

    printf("Usando o loop for:\n");
    for (i = 1; i <= 100; i++) {
        printf("%d ", i);  
    }
    printf("\n");

    printf("\nUsando o loop while:\n");
    i = 1;  
    while (i <= 100) {
        printf("%d ", i); 
        i++; 
    }
    printf("\n");

    printf("\nUsando o loop do-while:\n");
    i = 1; 
    do {
        printf("%d ", i);  
        i++;  
    } while (i <= 100);

    return 0;
}