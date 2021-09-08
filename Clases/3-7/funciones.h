#ifndef FUNCIONES_H_INCLUDED
#define FUNCIONES_H_INCLUDED


//Declaraciones de las funciones o procedimientos
//PRE:
//POST:
int elegirTamanio();
//PRE:
//POST:
void cargarVectorAleatorio(int v[], int tam);
//PRE:
//POST:
void mostrarVector(int v[], int tam);
int posMin(int v[], int tam);
int posMax(int v[], int tam);
int minVector(int v[], int tam);
int maxVector(int v[], int tam);
float promVector(int v[], int tam);
void sumaVectores(int v[], int w[], int resultado[], int tam);
void restaVectores(int v[], int w[], int resultado[], int tam);

//Hacerlos-----------------------------------------------------------------

//-------------------------------------------------------------------------

//Se las doy resueltas - ustedes deben adaptarlas para de > a < y para float
void ordenamientoBurbuja(int v[], int tam);
void ordenamientoSeleccion(int v[], int tam);
void ordenamientoInsercion(int v[], int tam);

int busquedaSecuencial(int v[], int tam, int buscar);




#endif // FUNCIONES_H_INCLUDED
