/*
****************************************************
Fecha: 16 de Agosto de 2022
Autor: Juan Sebastian Rojas Acevedo
Materia: Parallel and Distributed Computing
Tema: Primer taller en C
Objetivo: Compilacion por separado
********
*/

#include <stdio.h>
#include "taller_lib.h"
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>


void productoEnteros(){
    
    int num1=0,num2=0, producto=0;

    printf("\n\n*********************************************************************\n\n");
    printf("\t\tPRODUCTO DE DOS ENTEROS\n\n");
    printf("*********************************************************************\n");

    printf("\nIngrese el primer numero entero: ");
    scanf("%d", &num1);

    printf("\nIngrese el segundo numero entero: ");
    scanf("%d", &num2);

    producto = num1 * num2;

    printf("\n El producto de %d y de %d es: %d \n", num1, num2, producto);

}

void convertirDias(){

    int days=0, years=0, weeks=0, dayst=0;

    printf("\n\n*********************************************************************\n\n");
    printf("\t\tCONVERSION DE DIAS ANOS\n\n");
    printf("*********************************************************************\n");

    printf("\nIngrese la cantidad de dias: ");
    scanf("%d", &days);

    years = days / 365;
    weeks  = (days % 365) / 7;
    dayst = (days % 365) & 7;

    printf("\n Año(s): [%d] \n", years);
    printf("\n Semana(s): [%d] \n", weeks);
    printf("\n Dia(s): [%d] \n", dayst);

}

void distanciaPuntos(){ 
    float x1=0, y1=0, x2=0, y2=0, distancia=0;

    printf("\n\n*********************************************************************\n\n");
    printf("\t\tDISTANCIA ENTRE DOS PUNTOS\n\n");
    printf("*********************************************************************\n");

    printf("\nIngrese x1: ");
    scanf("%f", &x1);

    printf("\nIngrese y1: ");
    scanf("%f", &y1);

    printf("\nIngrese x2: ");
    scanf("%f", &x2);

    printf("\nIngrese y1: ");
    scanf("%f", &y2);

    distancia=sqrt(pow(x1 - x2, 2) + pow(y1 - y2, 2));

    printf("\nLa distancia entre los puntos es [%f]\n", distancia);

}

void primeroEnteros(){
    printf("\n\n*********************************************************************\n\n");
    printf("\t\tPRIMEROS DEIZ NUMEROS ENTEROS\n\n");
    printf("*********************************************************************\n");

    printf("\n\t\t");
    for(int i=1; i<=10; i++){
        printf("[%d]",i);
    }
    printf("\n");
}

void patronTriangulo(){
    printf("\n\n*********************************************************************\n\n");
    printf("\t\tPATRON DE TRIANGULOS RECTANGULOS CON ASTERISCOS\n\n");
    printf("*********************************************************************\n");

    int lineas = 0;

    printf("\nIngrese la cantidad de lineas que necesite, recuerde que maximo 14: ");
    scanf("%d", &lineas);

    printf("\n");

    for (int i = 1; i <= lineas; i++){
        for (int j = 0; j < i; j++){
            printf("*");
        }
        printf("\n");
    }
}

void matrizUno(){
    printf("\n\n*********************************************************************\n\n");
    printf("\t\tMATRIZ NXN DE UNOS\n\n");
    printf("*********************************************************************\n");

    int filas=0, columnas=0;
    int matriz[filas][columnas];

    do{

        printf("\n\t***Recuerde que maximo para filas y columnas sera 7***");
        printf("\nIngrese el numero de filas: ");
        scanf("%d", &filas);

        printf("\nIngrese el numero de columnas: ");
        scanf("%d", &columnas);


    }while(filas>7 || columnas>7); 

    printf("\n");
    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            matriz[i][j]=1;  
        }

    }

    for(int i=0; i<filas; i++){
        for(int j=0; j<columnas; j++){
            printf(" [%d]", matriz[i][j]);
        }
        printf("\n");
    }

}

void imprimir(int n, int f, int matrizC[n][f]){
    for(int i=0; i<n; i++){
        for(int j=0;j<f; j++){
            printf(" [%d]", matrizC[i][j]);
        }
        printf("\n");
    }
}

void sumaMatrices(int n, int f, int matrizA[n][f], int matrizB[n][f], int matrizC[n][f]){

    for(int i=0; i<n; i++){
        for(int j=0;j<f; j++){
            matrizC[i][j]= matrizA[i][j] + matrizB[i][j];
        }
    }
}

void restaMatrices(int n, int f, int matrizA[n][f], int matrizB[n][f], int matrizC[n][f]){

    for(int i=0; i<n; i++){
        for(int j=0;j<f; j++){
            matrizC[i][j]= matrizA[i][j] - matrizB[i][j];
        }
    }
}

void multiplicacionMatrices(int n, int matrizA[n][n], int matrizB[n][n], int matrizC[n][n]){
    for(int i=0; i<n; i++){
        for(int j=0;j<n; j++){
           matrizC[i][j]=0;
            for(int k=0; k<n; k++){
                  matrizC[i][j]+= matrizA[i][k] * matrizB[k][j];
            }    
        }
    }
}

void matrizInit(int n, int f, int matriz[n][f]){
    for(int i=0; i<n; i++){
        for(int j=0;j<f; j++){
            matriz[i][j]= rand() % 10;
        }
    }
}


void matrizRandom(){
    printf("\n\n*********************************************************************\n\n");
    printf("\t\tMATRIZ NXN DE NUMEROS ENTRE 1 Y 9\n\n");
    printf("*********************************************************************\n");

    int filas=0, columnas=0;
    int matrizA[filas][columnas];

    do{
        printf("\n\t***Recuerde que maximo para filas y columnas sera 7***");
        printf("\nIngrese el numero de filas: ");
        scanf("%d", &filas);

        printf("\nIngrese el numero de columnas: ");
        scanf("%d", &columnas);

    }while(filas>7 || columnas>7); 
    
    printf("\n");
    matrizInit(filas, columnas, matrizA);

    printf("\nMATRIZ A\n");
    imprimir(filas, columnas, matrizA);

}

void matricesSuma(){
    printf("\n\n*********************************************************************\n\n");
    printf("\t\tSUMA DE MATRICES NXN DE NUMEROS ENTRE 1 Y 9\n\n");
    printf("*********************************************************************\n");

    int filas=0, columnas=0;
   
    do{
        printf("\n\t***Recuerde que maximo para filas y columnas sera 7***");
        printf("\nIngrese el numero de filas: ");
        scanf("%d", &filas);

        printf("\nIngrese el numero de columnas: ");
        scanf("%d", &columnas);
    }while(filas>7 || columnas>7); 

     int matrizA[filas][columnas], matrizB[filas][columnas], matrizC[filas][columnas];
   
        matrizInit(filas, columnas, matrizA);
        matrizInit(filas, columnas, matrizB);

        printf("\nMATRIZ A\n");
        imprimir(filas, columnas, matrizA);
        
        printf("\nMATRIZ B\n");
        imprimir(filas, columnas, matrizB);

        printf("SUMA MATRICES A + B\n");
        sumaMatrices(filas, columnas, matrizA, matrizB, matrizC);
        imprimir(filas, columnas, matrizC);

}

void matricesResta(){
    printf("\n\n*********************************************************************\n\n");
    printf("\t\tRESTA DE MATRICES NXN DE NUMEROS ENTRE 1 Y 9\n\n");
    printf("*********************************************************************\n");

    int filas=0, columnas=0;
    int matrizA[filas][columnas], matrizB[filas][columnas], matrizC[filas][columnas];

    do{
        printf("\n\t***Recuerde que maximo para filas y columnas sera 7***");
        printf("\nIngrese el numero de filas: ");
        scanf("%d", &filas);
        printf("\nIngrese el numero de columnas: ");
        scanf("%d", &columnas);

    }while(filas>7 || columnas>7); 

        matrizInit(filas, columnas, matrizA);
        matrizInit(filas, columnas, matrizB);

        printf("\nMATRIZ A\n");
        imprimir(filas, columnas, matrizA);
        
        printf("\nMATRIZ B\n");
        imprimir(filas, columnas, matrizB);

        printf("RESTA MATRICES A - B\n");
        restaMatrices(filas, columnas, matrizA, matrizB, matrizC);
        imprimir(filas, columnas, matrizC);
}

void matricesProducto(){
    printf("\n\n*********************************************************************\n\n");
    printf("\t\tPRODUCTO DE MATRICES NXN DE NUMEROS ENTRE 1 Y 9\n\n");
    printf("*********************************************************************\n");

    int filas=0, columnas=0;
   
    do{
        printf("\n\t***Recuerde que maximo para filas y columnas sera 7***");
        printf("\nIngrese el numero de filas: ");
        scanf("%d", &filas);
        printf("\nIngrese el numero de columnas: ");
        scanf("%d", &columnas);

    }while(filas!=columnas); 
    
     int matrizA[filas][columnas], matrizB[filas][columnas], matrizC[filas][columnas];

        matrizInit(filas, columnas, matrizA);
        matrizInit(filas, columnas, matrizB);

        printf("\nMATRIZ A\n");
        imprimir(filas, columnas, matrizA);        
        printf("\nMATRIZ B\n");
        imprimir(filas, columnas, matrizB);

        printf("PRODUCTO MATRICES A * B\n");
        multiplicacionMatrices(filas, matrizA, matrizB, matrizC);
        imprimir(filas, columnas, matrizC);
}


void menu(){
    int opc = 0, oc=0;
    bool rept = false;

    do{        
        printf("\n");
        printf("*********************************************************************\n\n");
        printf("\t\tMENU PRINCIPAL\n\n");
        printf("*********************************************************************\n");
        printf("\n\t[ 1 ]. Programa en C que acepte dos enteros del usuario y calcule el producto de los dos enteros.");
        printf("\n\t[ 2 ]. Programa en C para convertir los dias especificados en anos, semanas y dias");
        printf("\n\t[ 3 ]. Programa en C para calcular la distancia entre los dos puntos.");
        printf("\n\t[ 4 ]. Programa en C para mostrar los 10 primeros numeros naturales.");
        printf("\n\t[ 5 ]. Programa en C para mostrar el patron como triangulo rectangulo usando un asterisco.");
        printf("\n\t[ 6 ]. Programa que imprima una matriz de 1, de tamano NxN.");
        printf("\n\t[ 7 ]. Programa que imprima una matriz de numeros aleatorios enteros, entre 0 y 9, de de tamano NxN.");
        printf("\n\t[ 8 ]. Programa que muestre dos matrices de numeros aleatorios, entre 0 y 9, de tamano NxN con su respectiva suma");
        printf("\n\t[ 9 ]. Programa que muestre dos matrices de numeros aleatorios, entre 0 y 9, de tamano NxN con su respectiva resta");        
        printf("\n\t[ 10 ]. Programa que muestre dos matrices de numeros aleatorios, entre 0 y 9, de tamano NxN.\n");        
        printf("\n Seleccione su respuesta: ");
        scanf("%d", &opc);
        printf("\n");

        switch(opc){
            case 1:
                productoEnteros();
                break;
            case 2:
                convertirDias();
                break;
            case 3:
                distanciaPuntos();
                break;
            case 4:
                primeroEnteros();
                break;
            case 5:
                patronTriangulo();
                break;
            case 6:
                matrizUno();
                break;
            case 7:
                matrizRandom();
                break;
            case 8:
                matricesSuma();
                break;
            case 9:
                matricesResta(); 
                break;
            case 10:
                matricesProducto();  
                break;
            default:
                printf("Revise");
        }

        printf("\n ¿Desea realizar otro punto? [1]: Si -- [0]: No ");
        scanf("%d", &oc);
        if(oc==0){
            rept=true;
        }else{
            rept=false;
        }
    }while(rept==false);
}
