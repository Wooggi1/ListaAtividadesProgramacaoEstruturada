#include <stdio.h>
#include <math.h>

int main () {
    float x1, x2, y1, y2;
    float distance;

    printf("Digite o valor x do ponto 1\n");
    scanf("%f", &x1);
    printf("Digite o valor y do ponto 1\n");
    scanf("%f", &y1);
    printf("Digite o valor x do ponto 2\n");
    scanf("%f", &x2);
    printf("Digite o valor y do ponto 2\n");
    scanf("%f", &x2);
    
    distance = sqrt(pow((x2 - x1),2) + pow((y2 - y1), 2));

    printf("A distancia entre o ponto 1 e o ponto 2 = %.4f", distance);

    return 0;
}