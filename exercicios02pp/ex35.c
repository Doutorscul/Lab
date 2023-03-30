#include <stdio.h>
 #include <stdio.h>

int main() {
    int dia, mes, ano, valido = 1;

    printf("Digite uma data no formato dd/mm/aaaa: ");
    scanf("%d/%d/%d", &dia, &mes, &ano);

    if (mes < 1  mes > 12) {
        valido = 0;
    } else if (mes == 2) {
        if ((ano % 4 == 0 && ano % 100 != 0)  ano % 400 == 0) { // ano bissexto
            if (dia < 1  dia > 29) {
                valido = 0;
            }
        } else { // ano não bissexto
            if (dia < 1  dia > 28) {
                valido = 0;
            }
        }
    } else if (mes == 4  mes == 6  mes == 9  mes == 11) { // meses com 30 dias
        if (dia < 1  dia > 30) {
            valido = 0;
        }
    } else { // meses com 31 dias
        if (dia < 1 || dia > 31) {
            valido = 0;
        }
    }

    if (valido) {
        printf("Data valida.\n");
    } else {
        printf("Data invalida.\n");
    }

    return 0;
}
