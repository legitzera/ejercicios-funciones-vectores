#include <stdio.h>

int main ()
{
    float reales [5];
    int i;


    for (i = 0; i < 5; i++)
    {
        printf ("Ingrese un numero real: ");
        scanf ("%f", &reales [i]);
    }

    printf ("\nContenido del array:\n");

    for (i = 0; i < 5; i++)
    {
        printf ("%3.2f\t", reales [i]);
    }

    return 0;
}
