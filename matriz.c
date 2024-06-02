#include <stdio.h>
#include "lecturas.h"
#include "arreglos.h"

int main() {
    int M, N;
    int matriz[50][50];
    int transpuesta[50][50];
    printf("--> * Bienvenido * <--\n");
    M = leerEnteroPositivo("\nIngrese cantidad de filas: ");
    N = leerEnteroPositivo("Ingrese cantidad de columnas: ");
    thematrix(matriz, N, M);
    imprimirOriginal(matriz, N, M);
    trans(matriz, transpuesta, N, M);
    imprimirTranspuesta(transpuesta, M, N);
    printf("Fin \n");
    return 0;
}


