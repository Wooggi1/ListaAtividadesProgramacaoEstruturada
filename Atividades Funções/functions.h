#include <stdio.h>

int AbrirMenu() {
    int opcao;

    printf("\n1 - Celsius para Fahrenheit\n");
    printf("2 - Fahrenheit para Celsius\n");
    printf("3 - Celsius para Kelvin\n");
    printf("4 - Kelvin para Celsius\n");
    printf("5 - Celsius para Reaumur\n");
    printf("6 - Reaumur para Celsius\n");
    printf("7 - Kelvin para Rankine\n");
    printf("8 - Rankine para Kelvin\n");
    printf("9 - Funcao Aleatoria da Prof\n");
    scanf("%d", &opcao);

    return opcao;
}

float CelsiusToFahrenheit(float celsius) {
    float fahrenheit;
    fahrenheit = (9 * celsius/5) + 32;
    return fahrenheit;
}

float FahrenheitToCelsius(float fahrenheit) {
    float celsius;
    celsius = (fahrenheit - 32) * 5/9.0;
    return celsius;
}

float CelsiusToKelvin(float celsius) {
    float kelvin;
    kelvin = celsius + 273.15;
    return kelvin;
}

float KelvinToCelsius(float kelvin) {
    float celsius;
    celsius = kelvin - 273.15;
    return celsius;
}

float CelsiusToReaumur(float celsius) {
    float reaumur;
    reaumur = celsius * 4/5.0;
    return reaumur;
}

float ReaumurToCelsius(float reaumur) {
    float celsius;
    celsius = reaumur * 5/4.0;
    return celsius;
}

float KelvinToRankine(float kelvin) {
    float rankine;
    rankine = kelvin * 1.8;
    return rankine;
}

float RankineToKelvin(float rankine) {
    float kelvin;
    kelvin = rankine/1.8;
    return kelvin;
}

float FuncaoRandom(float kelvin, float fahrenheit) {
    float celsius;
    celsius = kelvin - fahrenheit + 275.15;
    return celsius;
}