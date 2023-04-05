#include <stdio.h>

int main ()
{   
    int counter = 0;

    for (int i = 1; i < 16; i++)
    {
        if(i%3 == 0)
        {
            printf("%d multiplo de 3\n", i);
            counter++;
        }

        if (counter == 5)
        {
            break;
        }
    }
}