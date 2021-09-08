#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */
void cargarVector(int v[], int t);
int valorMinimo();
int valorMaximo();
void mostrarVector(int v[], int tamanio);
int cantidadNumerosRepetidosEnElVector(int vector[], int t);
int main(int argc, char *argv[]) {
	int min;
	int tamanio=5;
	int vector[tamanio];
	cargarVector(vector, tamanio);
	mostrarVector(vector, tamanio);
	printf ("\nel valor minimo es %d\n", valorMinimo(vector, tamanio));
	printf ("el valor maximo es %d\n", valorMaximo(vector, tamanio));
	printf ("La cantidad de numeros repetidos en el vector es %d", cantidadNumerosRepetidosEnElVector(vector, tamanio));
	return 0;
}
    void cargarVector(int v[], int t){
	int i;
	for (i=0;i<t;i++){
		printf ("Ingrese un numero para el vector:");
		scanf ("%d", &v[i]);
	}
} 
    void mostrarVector(int v[], int t){
    	for (int i=0;i<t;i++){
    		printf ("---  %d  ---", v[i]);
		}
	}
    int valorMinimo(int vector[], int tamanio){
    	int i;
    	int min=vector[0];
    	for (i=0;i<tamanio;i++){
    		if (min>vector[i]){
    			min=vector[i];
			}
		}
		return min;
	}
	int valorMaximo(int vector[], int tamanio){
		int i;
		int max=vector[0];
		for (i=0;i<tamanio;i++){
			if (max<vector[i]){
				max=vector[i];
			}
		}
		return max;
	}
    int cantidadNumerosRepetidosEnElVector(int vector[], int tamanio){
		int i, j;
		int repetidos=0;
		for (i=0;i<tamanio;i++){
				int cont=0;
			for (j=0;j<tamanio;j++){
			if (vector[i]==vector[j]){
				cont++;
			}
		}
		repetidos=cont;
	}
		return repetidos;
	}
