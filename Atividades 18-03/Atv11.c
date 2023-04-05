#include <stdio.h>
#include <math.h>

int main () {
    float raio, area, volume;
    const float PI = 3.14159;

    printf("Informe o raio da esfera\n");
    scanf("%f", &raio);

    volume = (4.0/3) * PI * pow(raio, 3);
    area = 4 * PI * pow(raio, 2);

    printf("O Volume da esfera = %.4f\n", volume);
    printf("A area da esfera = %.4f", area);
    return 0;
}