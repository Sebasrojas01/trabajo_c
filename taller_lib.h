#ifndef TALLER_LIB_H_INCLUDED
#define TALLER_LIB_H_INCLUDED

void productoEnteros();
void convertirDias();
void distanciaPuntos();
void primeroEnteros();
void patronTriangulo();
void matrizUno();
void imprimir(int n, int f, int matrizC[n][f]);
void sumaMatrices(int n, int f, int matrizA[n][f], int matrizB[n][f], int matrizC[n][f]);
void restaMatrices(int n, int f, int matrizA[n][f], int matrizB[n][f], int matrizC[n][f]);
void multiplicacionMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]);
void matrizInit(int n, int f, int matriz[n][f]);
void matrizRandom();
void matricesSuma();
void matricesResta();
void matricesProducto();
void menu();

#endif