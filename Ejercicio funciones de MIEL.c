#include <stdio.h>

// Prototipos de funciones
int validarRango(int num);
int esNegativo(int num);
float calcularPromedio(int suma, int cantidad);
int informarMenor(int menor, int posicion);

int main() {
    int num, cantNegativos = 0, sumaPositivos = 0, cantPositivos = 0;
    int sumaTotal = 0, cantTotal = 0, menor, posicionMenor = -1, posicionActual = 1;
    int primerIngreso = 1; // Para identificar el primer n�mero ingresado

    // Ciclo de ingreso de n�meros
    do {
        printf("Ingrese un valor entre -50 y 50 (o -100 para finalizar): ");
        scanf("%d", &num);

        // Si el n�mero es -100, terminamos el ciclo
        if (num == -100) {
            num = 0; // Aseguramos no procesar -100 en las estad�sticas
        }

        // Verificaci�n del rango y mensaje de error sin usar `continue`
        if (num != 0) {
            if (!validarRango(num))
            {
                printf("N�mero fuera de rango. Intente nuevamente.\n");
            }

                // Procesar n�mero si es v�lido y no es -100
            if (esNegativo(num))
            {
                cantNegativos++;
            }
           else
            {
                sumaPositivos += num;
                cantPositivos++;
            }
                sumaTotal += num;
                cantTotal++;

                // Encontrar el menor valor y su posici�n
                if (primerIngreso || num < menor)
                {
                    menor = num;
                    posicionMenor = posicionActual;
                    primerIngreso = 0;
                }
        }
            posicionActual++;

    } while (num != 0); // Termina cuando se ingresa -100

    // Calcular promedios
    float promedioPositivos = calcularPromedio(sumaPositivos, cantPositivos);
    float promedioTotal = calcularPromedio(sumaTotal, cantTotal);

    // Mostrar resultados
    printf("Cantidad de n�meros negativos ingresados: %d\n", cantNegativos);
    printf("Promedio de los n�meros positivos: %.2f\n", promedioPositivos);
    printf("Promedio de todos los n�meros ingresados (sin incluir -100): %.2f\n", promedioTotal);
    informarMenor(menor, posicionMenor);

    return 0;
}

// Definici�n de funciones

// Funci�n para validar si el n�mero est� en el rango permitido
int validarRango(int num)
{
    if (num >= -50 && num <= 50)
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

// Funci�n para verificar si un n�mero es negativo
int esNegativo(int num) {
    return (num < 0);
}

// Funci�n para calcular el promedio de un total y una cantidad
float calcularPromedio(int suma, int cantidad) {
    if (cantidad > 0) {
        return (float)suma / cantidad;
    }
    return 0;
}

// Funci�n para encontrar el menor valor y su posici�n
int informarMenor(int menor, int posicion) {
    printf("El menor valor ingresado es %d y fue ingresado en la posici�n %d\n", menor, posicion);

    return 0;
}
