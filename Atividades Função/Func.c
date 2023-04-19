#include <stdio.h>
#include "functions.h"

int main() {
    float Temperatura, celsius, fahrenheit, kelvin, reaumur, rankine;
    int menu = 2, opcao;

    while(menu != 0){
        printf("1 - Abre o Menu\n0 - fecha o programa\n");
        scanf("%d", &menu);

        if(menu == 1){
           opcao = AbrirMenu();
        }
        else{
            return 0;
        }

        switch (opcao){
        case 1:
            printf("Digite o valor em Celsius\n");
            scanf("%f", &celsius);
            printf("%.1f Celsius em Fahrenheit: %.1f\n", celsius, CelsiusToFahrenheit(celsius));
            break;
        case 2:
            printf("Digite o valor em Fahrenheit\n");
            scanf("%f", &fahrenheit);
            printf("%.1f Fahrenheit em Celsius: %.1f\n", fahrenheit, FahrenheitToCelsius(fahrenheit));
            break;
        case 3:
            printf("Digite o valor em Celsius\n");
            scanf("%f", &celsius);
            printf("%.1f Celsius em Kelvin: %.1f\n", celsius, CelsiusToKelvin(celsius));
            break;
        case 4:
            printf("Digite o valor em Kelvin\n");
            scanf("%f", &kelvin);
            printf("%.1f Kelvin em Celsius: %.1f\n", kelvin, KelvinToCelsius(kelvin));
            break;
        case 5:
            printf("Digite o valor em Celsius\n");
            scanf("%f", &celsius);
            printf("%.1f Celsius em Reaumur: %.1f\n", celsius, CelsiusToReaumur(celsius));
            break;
        case 6:
            printf("Digite o valor em Reaumur\n");
            scanf("%f", &reaumur);
            printf("%.1f Reaumur em Celsius: %.1f\n", reaumur, ReaumurToCelsius(reaumur));
            break;
        case 7:
            printf("Digite o valor em Kelvin\n");
            scanf("%f", &kelvin);
            printf("%.1f Kelvin em Rankine: %.1f\n", kelvin, KelvinToRankine(kelvin));
            break;
        case 8:
            printf("Digite o valor em Rankine\n");
            scanf("%f", &rankine);
            printf("%.1f Rankine em Kelvin: %.1f\n", rankine, RankineToKelvin(rankine));
            break;
        case 9:
            printf("Digite o valor Kelvin\n");
            scanf("%f", &kelvin);
            printf("Digite o valor Fahrenheit\n");
            scanf("%f", &fahrenheit);
            printf("O valor da funcao = %.1f\n", FuncaoRandom(kelvin, fahrenheit));
        }
    }
    
}



