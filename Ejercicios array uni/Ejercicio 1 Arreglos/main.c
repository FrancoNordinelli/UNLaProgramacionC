#include <stdio.h>
#include <stdlib.h>

/* Crear un programa semejante al ejemplo 1, donde nos muestre el máximo, el mínimo 
y nos muestre todo el vector pero de atrás para adelante, 
es decir de la posición 19 a la 0 */

int main() {
	int i, j, k,  vector [5];
	for (i=0; i<5; i++){
		printf ("Por favor, ingrese el numero que desea almacenar en la posicion del vector:\n");
		scanf ("%d", &vector[i]);
	}
	int min=vector[0];
	int max=vector[0];
	for (j=0; j<5; j++){
		if (vector [j]<min){
			min=vector[j];
			}
		if (vector [j]>max) {
			max=vector[j];
		}
	}
	for (i= 5-1;i>-1; i--){
		printf ("-%d", vector [i]);
	}
	printf ("\nEl menor de los numeros es:%d\n", min);
	printf ("El mayor de los numeros es:%d\n", max);
	return 0;
}
