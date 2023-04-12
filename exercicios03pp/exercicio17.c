 #include <stdio.h>

int main() {
    float altura_chico = 1.50; // altura inicial de Chico em metros
    float altura_ze = 1.10; // altura inicial de Zé em metros
    int anos = 0; // contador de anos

    // Loop para calcular quantos anos serão necessários para que Zé seja mais alto que Chico
    while (altura_ze <= altura_chico) {
        altura_chico += 0.02; // Chico cresce 2 cm por ano (ou 0.02 metros)
        altura_ze += 0.03; // Zé cresce 3 cm por ano (ou 0.03 metros)
        anos++;
    }

    printf("Após %d anos, Zé será mais alto que Chico.\n", anos);

    return 0;
}
