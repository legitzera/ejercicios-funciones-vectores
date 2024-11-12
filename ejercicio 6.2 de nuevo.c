#include <stdio.h>

int EstaDentroDelRango(int num, int inf, int sup);
int LeerYValidar(int inf, int sup);

int main ()
{
    int cant100_500 = 0, cant_pares500_1200 = 0, cant1200_2000 = 0, suma1200_2000 = 0, num;
    float promedio;

    while ((num = LeerYValidar(100, 2000))!= 99)
    {
        if (EstaDentroDelRango (num, 100, 500))
        {
            cant100_500 ++;
        }

        if (EstaDentroDelRango (num, 500, 1200) && num % 2 == 0)
        {
            cant_pares500_1200 ++;
        }

        if (EstaDentroDelRango (num, 1200, 2000))
        {
            suma1200_2000 += num;
            cant1200_2000 ++;
            promedio = (float)suma1200_2000 / cant1200_2000;
        }
    }

    printf ("La cantidad de numeros ingresados entre 100 y 500 son: %d\n", cant100_500);
    printf ("La cantidad de numeros PARES ingresados entre 500 y 1200 son: %d\n", cant_pares500_1200);

    if (cant1200_2000 > 0)
    {
        printf ("El promedio de numeros ingresados entre 1200 y 2000 es: %.1f\n", promedio);
    }
    else
    {
        printf ("NO se ingresaron numeros entre 1200 y 2000.\n");
    }

    return 0;
}

int EstaDentroDelRango (int num, int inf, int sup)
{
    if (num >= inf && num <= sup)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

int LeerYValidar (int inf, int sup)
{
    int num;

    do
    {
        printf ("Ingrese un numero entre %d y %d (pulse 99 para salir): ", inf, sup);
        scanf ("%d", &num);

        if ((num < inf || num > sup) && num != 99)
        {
            printf ("Numero invalido. Intende de nuevo\n");
        }
    } while ((num < inf || num > sup) && num != 99);

    return num;
}


