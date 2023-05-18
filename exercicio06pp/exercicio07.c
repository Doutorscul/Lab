#include <stdio.h>
#include <math.h>

typedef struct {
    float raio;
    float argumento;
} CoordenadaPolar;

typedef struct {
    float x;
    float y;
} CoordenadaCartesiana;

int main() {
    CoordenadaPolar polar;
    CoordenadaCartesiana cartesiana;

    printf("Digite o raio em coordenada polar: ");
    scanf("%f", &polar.raio);

    printf("Digite o argumento em radianos em coordenada polar: ");
    scanf("%f", &polar.argumento);
    cartesiana.x = polar.raio * cos(polar.argumento);
    cartesiana.y = polar.raio * sin(polar.argumento);

    printf("Coordenada polar: (Raio=%.2f, Argumento=%.2f rad)\n", polar.raio, polar.argumento);
    printf("Coordenada cartesiana: (x=%.2f, y=%.2f)\n", cartesiana.x, cartesiana.y);

    return 0;
}
