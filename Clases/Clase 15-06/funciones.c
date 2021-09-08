#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "funciones.h"


//Implementacion o cuerpo de las funciones o procedimientos

int elegirTamanio(){

    int tam = 0;
    printf("Ingrese el tamaño que quiere\n");
    scanf("%d", &tam);


    return tam;
    }

void cargarVectorAleatorio(int v[], int tam){

    for ( int i = 0; i <tam; i++){
        //-70 a 70
        v[i] = -70 + rand()%141;

    }

}


void mostrarVector(int v[], int tam){

    int i;
    printf("\n\n---------------\n\n");
    for (  i = 0; i <tam; i++){

        printf(" %d ", v[i]);

    }

}


int posMin(int v[], int tam){

    int pos = 0;
    int min = v[0];


    for ( int i = 0; i<tam; i++){

        if(v[i]<min){
            min = v[i]; //<_------
            pos = i;
        }
    }

    return pos;
}


int minVector(int v[], int tam){


    int min = v[  posMin(v,tam)  ];

    return min;
}


void sumaVectores(int v[], int w[], int resultado[], int tam){


    for ( int i = 0; i <tam; i++){

        resultado[i]= v[i]+w[i];
    }
}










//Implementaciones
void ordenamientoBurbuja(int v[], int tam){

    int aux;

    for ( int i = 0; i<tam; i++){

        for(int j =0; j<tam-1;j++){
            if(v[j]>v[j+1]){
                aux = v[j];
                v[j]=v[j+1];
                v[j+1]=aux;
            }


        }
    }

}



void ordenamientoSeleccion(int v[], int tam){

    int min, tmp;
    for ( int i = 0; i<tam; i++ ){
        min = i;
        for(int j = i+1; j<tam; j++){

            if(v[min]>v[j]){
                min = j;
            }//cierra el id

        }//Cierra el for

        tmp = v[min];
        v[min]= v[i];
        v[i]= tmp;
    }//Cierra el for

}


void ordenamientoInsercion(int v[], int tam){

         int i, j, temp;
         for(i=0; i<tam; i++){
            temp=v[i];
            j=i-1;
            while(j>=0 && v[j] >temp){
                v[j+1] = v[j];
                j--;
            }

            v[j+1] = temp;
         }

}
