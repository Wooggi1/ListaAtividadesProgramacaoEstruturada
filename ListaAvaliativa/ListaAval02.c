<<<<<<< HEAD
#include <stdio.h>
#include <math.h>

int main () {
    int x1, x2, y1, y2;
    float distancia;

    printf("Digite o valor de X da primeira coordenada\n");
    scanf("%d", &x1);
    printf("Digite o valor de Y da primeira coordenada\n");
    scanf("%d", &y1);

    printf("Digite o valor de X da segunda coordenada\n");
    scanf("%d", &x2);
    printf("Digite o valor de X da segunda coordenada\n");
    scanf("%d", &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("Distancia = %.1f", distancia);

=======
#include <stdio.h>
#include <math.h>

int main () {
    int x1, x2, y1, y2;
    float distancia;

    printf("Digite o valor de X da primeira coordenada\n");
    scanf("%d", &x1);
    printf("Digite o valor de Y da primeira coordenada\n");
    scanf("%d", &y1);

    printf("Digite o valor de X da segunda coordenada\n");
    scanf("%d", &x2);
    printf("Digite o valor de X da segunda coordenada\n");
    scanf("%d", &y2);

    distancia = sqrt(pow((x2 - x1), 2) + pow((y2 - y1), 2));

    printf("Distancia = %.1f", distancia);

>>>>>>> 3f42a1fb65f4acf42b9c778f91180ac9962c5d3e
}