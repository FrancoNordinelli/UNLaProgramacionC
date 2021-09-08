#include <stdio.h>
#include <stdlib.h>

/* Crear un arreglo que ingresa 10 alturas. Una vez ingresadas las alturas, mostrar la mínima, 
la máxima, el promedio y las alturas en las posiciones pares, es decir vector[0], vector[2], etc etc.*/

int main(int argc, char *argv[]) {
	int i, j;
	float altura[5], prom, min, max, suma, alturas_pares;
	for (i=0;i<5;i++){
		printf ("Ingrese una altura:\n");
		scanf ("%f", &altura[i]);
		suma=suma+altura[i];
		}
		max=altura[0];
		min=altura[0];
		for (j=0;j<5;j++){
			if (altura[j]>max){
				max=altura[j];
			}	
			if (altura[j]<min){
				min=altura[j];
			}
		}
		prom=suma/5;
		printf ("Las alturas en las posiciones pares son");
		for (i=1; i<5; i=i+2){
			printf ("---%.2f", altura[i]);
		}
		printf ("\nLa mayor altura es:%.2f\n", max);
		printf ("La menor altura es:%.2f\n", min);
		printf ("El promedio de las alturas es:%.2f\n", prom);
	return 0;
}
