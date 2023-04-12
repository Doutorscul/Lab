#include <stdio.h>

int main() {
    int num = 1;  
    int count = 0; 

    printf("Os cinco primeiros multiplos de 3 sao: \n");

  
    while (count < 5) {
        if (num % 3 == 0) {  
            printf("%d ", num);  
            count++;  
        }
        num++;  
    }

    printf("\n");

    return 0;
}
