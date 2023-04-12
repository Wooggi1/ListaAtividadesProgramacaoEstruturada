#include <stdio.h>
#include <math.h>

int main () {
    int raio;
    const float PI = 3.14159;
    float volume, areaSuperficie;

    printf("Digite o valor do raio\n");
    scanf("%d", &raio);

    volume = (4.0/3) * PI * pow(raio, 3);
    areaSuperficie = 4 * PI * pow(raio, 2);

    printf("Volume: %.1f\n", volume);
    printf("Area: %.1f", areaSuperficie); 
}