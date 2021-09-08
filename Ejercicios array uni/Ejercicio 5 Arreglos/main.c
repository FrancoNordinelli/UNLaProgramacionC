#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/* Crear un vector de 30 números enteros aleatorios, entre 0 y 50.  
Mostrar el arreglo. Calcular la frecuencia de cada numero del arreglo, y guardar todas las frecuencias en un nuevo vector. Calcular la moda del vector.
 Calcular el promedio del vector. 
Calcular el desvió estándar de los números del vector. */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int i, j, vector[8], frecuencia[8];
	int moda;
		for (i=0;i<8;i++){
		vector[i]=rand()%11;
	}
		for (i=0;i<8;i++){
		printf ("  %d  ", vector[i]);
	}
		printf ("\n");
	for (i=0;i<8;i++){
		int cont=0;
		for (j=0;j<8;j++){
			if (vector[i]==vector[j]){
				cont++;
			}		
		}
		if (cont!=0){
			frecuencia[i]=cont;
	}
}
	for (i=0;i<8;i++){
		printf ("La frecuencia de %d es %d/8\n", vector[i], frecuencia[i]);
	}
	return 0;
}
