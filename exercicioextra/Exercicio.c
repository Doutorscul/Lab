#include <stdio.h>
#include <string.h>

#define MAX_SIZE 1000

int main() {
    char input_string[MAX_SIZE], output_string[MAX_SIZE];
    printf("Digite uma string: ");
    fgets(input_string, MAX_SIZE, stdin);

    int len = strlen(input_string);
    int i, j;
    for (i = 0, j = 0; i < len; i++) {
        if (input_string[i] == 'r') {
            if (i < len - 1 && input_string[i+1] == 'r') {
                output_string[j++] = 'l';
                i++;
            } else if (i == len - 1 || input_string[i+1] == ' ' || input_string[i+1] == '\n') {
                output_string[j++] = input_string[i];
            } else {
                output_string[j++] = 'l';
            }
        } else {
            
            output_string[j++] = input_string[i];
        }
    }

    printf("String de saída: %s\n", output_string);
    return 0;
}
