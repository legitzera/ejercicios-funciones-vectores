#include <stdio.h>
void carga(int[], int);
void mostrar(int[], int);
int main ()
{
 int vec[5];
 carga(vec,5);
 mostrar(vec,5);
 return 0;
}
void carga(int v[], int N)
{
 int i;
 for (i=0;i<N;i++)
 {
 printf("Ingrese un numero: ");
 scanf("%d",&v[i]);
 }
}
void mostrar(int v[], int N)
{
 int i;
 for (i=0;i<N;i++)
 printf("%d\n",v[i]);
}

