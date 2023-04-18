<<<<<<< HEAD
#include <stdio.h>

int main () {
    int num;

    printf("Digite um numero\n");
    scanf("%d", &num);
    printf("Divisores:");
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf(" %d,", i);
        }
    }
=======
#include <stdio.h>

int main () {
    int num;

    printf("Digite um numero\n");
    scanf("%d", &num);
    printf("Divisores:");
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf(" %d,", i);
        }
    }
>>>>>>> 3f42a1fb65f4acf42b9c778f91180ac9962c5d3e
}