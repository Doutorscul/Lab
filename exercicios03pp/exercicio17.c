 #include <stdio.h>

int main() {
    float altura_chico = 1.50; 
    float altura_ze = 1.10; 
    int anos = 0; 

    
    while (altura_ze <= altura_chico) {
        altura_chico += 0.02; (ou 0.02 metros)
        altura_ze += 0.03; (ou 0.03 metros)
        anos++;
    }

    printf("Após %d anos, Zé será mais alto que Chico.\n", anos);

    return 0;
}
