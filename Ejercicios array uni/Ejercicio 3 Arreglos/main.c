#include <stdio.h>
#include <stdlib.h>

/* El usuario elije cuantas posiciones tiene el vector. Una vez definido el tama�o del vector (por el usuario), 
el usuario tipea tantos n�meros enteros como sean necesarios para completar el array. Una vez completo el array,
 mostrar la suma de los n�meros pares, el promedio de los impares, el m�ximo valor y la posici�n donde estaba el m�ximo, el m�nimo y su posici�n. 
Mostrar el arreglo de derecha a izquierda y de izquierda a derecha.  */

int main(int argc, char *argv[]) {
	int  n, i;
	int suma_par=0;
	float promedio=0;
	printf ("Cual sera el tama�o del vector?\n");
	scanf ("%d", &n);
	int tamanio[n];
	for (i=0;i<n;i++){
		printf ("Ingrese un numero:\n");
		scanf("%d", &tamanio[i]);
	}
	for(i=0;i<n;i++){
		if (tamanio[i]%2==0){
			suma_par=suma_par+tamanio[i];
		}
		if (tamanio[i]%2!=0){
			promedio=(promedio+tamanio[i])/promedio;
		}
	}
	int maximo=tamanio[0];
	for (i=0;i<n;i++){
		if (tamanio[i]>maximo){
			maximo=tamanio[i];
		}
	}
	printf ("La suma de los pares es:%d\n", suma_par);
	printf ("El promedio de los impares es:%.2f\n", promedio);
	printf ("El maximo es %d", maximo);
	return 0;
}
