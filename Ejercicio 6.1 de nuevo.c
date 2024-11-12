#include <stdio.h>

int mostrar_menu (int a, int b);
int sumar (int a , int b);
int restar (int a, int b);
int multiplicar (int a, int b);
float dividir (int a, int b);

int main ()
{
    int n1, n2, opcion, resultado;
    float resultado_div;

    printf ("Ingrese el primer numero: ");
    scanf ("%d", &n1);
    printf ("Ingrese el segundo numero: ");
    scanf ("%d", &n2);

    do
    {
        opcion = mostrar_menu (n1, n2);

        switch (opcion)
        {
            case 1: resultado = sumar (n1, n2);
            printf ("\nEl resultado de la suma es: %d\n", resultado);
            break;

            case 2: resultado = restar (n1, n2);
            printf ("\nEl resultado de la resta es: %d\n", resultado);
            break;

            case 3: resultado = multiplicar (n1, n2);
            printf ("\nEl resultado de la multiplicacion es: %d\n", resultado);
            break;

            case 4: resultado_div = dividir (n1, n2);
            printf ("\nEl resultado de la division es: %.1f", resultado_div);
            break;

            case 5: printf ("Ingrese el primer numero: ");
            scanf ("%d", &n1);
            printf ("Ingrese el segundo numero: ");
            scanf ("%d", &n2);
            break;

            case 6: printf ("\nSaliendo del programa...");
            break;

        }
    } while (opcion != 6);

    return 0;
}

int mostrar_menu (int n1, int n2)
{
    int opcion ;

   printf ("\n Menu de Opciones\n");
   printf ("---- -- --------\n");
   printf ("Numero 1: %d Numero 2: %d\n", n1, n2);
   printf ("1) Sumar\n");
   printf ("2) Restar\n");
   printf ("3) Multiplicar\n");
   printf ("4) Dividir\n");
   printf ("5) Ingresar Nuevos Numeros\n");
   printf ("6) Salir\n");
   printf ("\nIngrese su opcion: ");
   scanf ("%d", &opcion);

   while (opcion < 1 || opcion > 6)
   {
       printf ("Opcion invalida, seleccione un numero del 1 al 6: ");
       scanf ("%d", &opcion);
   }

   return opcion;
}

int sumar (int a, int b)
{
    return a + b;
}

int restar (int a , int b)
{
    return a - b;
}

int multiplicar (int a, int b)
{
    return a * b;
}

float dividir (int a, int b)
{
    return (float)a / b;
}
