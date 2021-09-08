#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"
#include "funcionesMatrices.h"



//REPASO PRE PARCIAL - VIERNES 2
int aleatorioEntre(int mini, int maxi);
void cargarVectorConAleatorios(int v[], int tam, int mini,int maxi);
void cargarVectorConAleatoriosSinRepetir(int v[], int tam, int mini,int maxi);
int sonIguales(char nombre1[], char nombre2[], int tam); //-1 o 1
//string.h ---> strcpy, strcmp, strcat, strlen
//con un for comparando...



int main()

{

    srand(time(0));
    printf("---------    3-7    ---------\n");


    
    int vector[5];
    //int cargarVector(vector, 5);
    //int mostrarVector(vector, 5);

    int tam = 5; //printf---scanf
    int matriz[tam][RENGLONES];   //El tamaño de la 2da dimension
    //se define global
    //cargarMatriz(matriz, 5, 6)    U______U
    //mostrarMatriz(matriz, 5, 6)             U______U
    cargarMatriz(matriz, tam);
    mostrarMatriz(matriz, tam);

    //Vector para la suma por renglones
    int vectorSuma[RENGLONES];
    sumarPorRenglones(matriz, tam, vectorSuma);
    mostrarVector(vectorSuma, RENGLONES);



    //Repaso para el parcial

    printf("\nNumeros entre -2 y 5---> %d", aleatorioEntre(-2,5));
    printf("\nNumeros entre -2 y 5---> %d", aleatorioEntre(-2,5));
    printf("\nNumeros entre -2 y 5---> %d", aleatorioEntre(-2,5));

    //int vector[8];

    cargarVectorConAleatoriosSinRepetir(vector, 8, -5, 20);
    mostrarVector(vector, 8);







    return 0;
}



int aleatorioEntre(int mini, int maxi){

        //mini = 8, maxi = 20

        int resultado = 0;


        resultado  =  mini + rand()%(maxi - mini +1);


        return resultado;

}



void cargarVectorConAleatorios(int v[], int tam, int mini,int maxi){


    for ( int i = 0; i<tam; i++){

        v[i]= aleatorioEntre(mini, maxi);
    }



}




void cargarVectorConAleatoriosSinRepetir(int v[], int tam, int mini,int maxi){

     int numeroNuevo = 0;
     int resultadoBusqueda = 0 ;


    for ( int i = 0; i<tam; i++){

        do{
        numeroNuevo = aleatorioEntre(mini, maxi);
        resultadoBusqueda = busquedaSecuencial(v, tam, numeroNuevo); //nos da la posicion ---> -1
        }while(resultadoBusqueda!=-1);

        v[i]= numeroNuevo;

    }

}







