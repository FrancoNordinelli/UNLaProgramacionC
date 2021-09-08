#ifndef CARTONES_H_INCLUDED
#define CARTONES_H_INCLUDED
#define COLUMNAS 5
#define RENGLONES 3



int cantCartones();
void cargarCartonesAleatorio(int matriz[RENGLONES][COLUMNAS]);
void cargarCartonesPersonalizado(int matriz[][RENGLONES][COLUMNAS], int cartones);
void mostrarCartones(int matriz[][RENGLONES][COLUMNAS], int c);
void sacarBolilla(int vector[], int tam);
void mostrarBolillero(int vector[], int tam);

#endif
