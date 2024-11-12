#include <stdio.h>

int cargaProductos(int vcod[], float vprecios[], int N);
int mostrarProductos(int vcod[], float vprecios[], int N);

int main() {
    int N;

    printf("Ingrese la cantidad de productos: ");
    scanf("%d", &N);

    int vcod[N];
    float vprecios[N];

    // Llamada para cargar productos
    cargaProductos(vcod, vprecios, N);

    // Llamada para mostrar productos
    mostrarProductos(vcod, vprecios, N);

    return 0;
}

int cargaProductos(int vcod[], float vprecios[], int N) {
    int i;
    for (i = 0; i < N; i++) {
        printf("Ingrese el código de producto %d: ", i + 1);
        scanf("%d", &vcod[i]);
        printf("Ingrese el precio del producto %d: ", vcod[i]);
        scanf("%f", &vprecios[i]);
    }
}

int mostrarProductos(int vcod[], float vprecios[], int N) {
    int i;
    printf("\nLista de productos y precios:\n");
    for (i = 0; i < N; i++) {
        printf("Producto código %d - Precio: %.2f\n", vcod[i], vprecios[i]);
    }
}
