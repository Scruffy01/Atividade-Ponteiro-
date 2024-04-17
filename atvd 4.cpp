#include <stdio.h>
#include <math.h>
#define PI 3.14

//Questăo 5

void calcularAreaVolume(double raio, double *area, double *volume) {
    *area = 4 * PI * pow(raio, 2);
    *volume = (4.0 / 3.0) * PI * pow(raio, 3);
}

int main() {
    double raio, area, volume;

    printf("Digite o raio da esfera: ");
    scanf("%lf", &raio);

    calcularAreaVolume(raio, &area, &volume);

    printf("\n\nArea da superficie: %.2f\n", area);
    printf("\n\nVolume: %.2f\n", volume);

    return 0;
}
