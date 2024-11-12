#include <stdio.h>
int carga(int[], int);
float promedio (int[], int);
int main()
{
 int edades[10], cant;
 float prom;
 cant=carga(edades,10);
 if (cant!=0)
 {
 prom = promedio(edades, cant);
 printf("El promedio de edades del curso es %.2f", prom);
 }
 else
 printf("Sin Datos");
 return 0;
}
int carga(int ve[], int N)
{
 int i=0,edad;
 printf ("Ingrese la edad del alumno (0 para finalizar):");
 scanf("%d",&edad);
 while (edad>0 && i<N)
 {
 ve[i]=edad;
 i++;
 if (i<N) //evita ingresar un dato cuando no hay espacio para almacenarlo
 {
 printf ("Ingrese la edad del alumno:");
 scanf("%d",&edad);
 }
 }
 return i;
}
float promedio (int v[], int max)
{
 int suma=0,i;
 for (i=0;i<max;i++)
 suma+=v[i];
 return (float)suma/max;
}

