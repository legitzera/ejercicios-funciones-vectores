#include <stdio.h>

int main ()
{
    int edad, i = 0, k = 0, v_edad [5];

    printf ("Ingrese una edad (0 para salir): ");
    scanf ("%d", &edad);

    while (edad != 0 && i < 5)
    {
        v_edad [i] = edad;
        i++;
        printf ("\nIngrese una edad (0 para salir): ");
        scanf ("%d", &edad);
    }

    printf ("\nContenido del array:\n");
    for (k = 0; k < i; k++)
    {
        printf ("%3d", v_edad [k]);
    }

    return 0;

}
