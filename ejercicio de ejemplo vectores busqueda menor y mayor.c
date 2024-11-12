#include <stdio.h>

int main() {
    int numeros[] = {35, 80, 130, 4, 50};  // Definimos un arreglo
    int mayor = numeros[0];  // Suponemos que el mayor es el primer elemento
    int menor = numeros[0];  // Suponemos que el menor es el primer elemento
    int posMayor = 0, posMenor = 0;  // Guardamos las posiciones del mayor y menor
    int i;

    // Recorremos el arreglo
    for (i = 1; i < 5; i++) {  // Sabemos que el arreglo tiene 5 elementos
        if (numeros[i] > mayor) {
            mayor = numeros[i];  // Si encontramos un n�mero mayor, lo actualizamos
            posMayor = i;  // Actualizamos la posici�n del mayor
        }
        if (numeros[i] < menor) {
            menor = numeros[i];  // Si encontramos un n�mero menor, lo actualizamos
            posMenor = i;  // Actualizamos la posici�n del menor
        }
    }

    // Mostramos los resultados
    printf("El mayor valor es %d y est� en la posici�n %d\n", mayor, posMayor + 1);
    printf("El menor valor es %d y est� en la posici�n %d\n", menor, posMenor + 1);

    return 0;
}
