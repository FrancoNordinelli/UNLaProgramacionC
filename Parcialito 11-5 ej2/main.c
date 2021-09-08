#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Generar un programa en el cual el usuario puede elegir el tamaño del vector de números enteros.
Una vez elegido el tamaño del vector se pide crear una carga aleatoria de este.
Luego el programa debe entrar a un menú que permite 1- Mostrar la cantidad de pares, 2- Mostrar el promedio, 0- Salir y mostrar todo el array invertido.
 */

int main(int argc, char *argv[]) {
	srand(time(NULL));
	int i, tamanio, opcion=1;
	int suma=0;
	int par=0;
	float prom=0;
	printf ("Ingrese el tamanio del vector\n");
	scanf ("%d", &tamanio);
	int vector[tamanio];
	for (i=0;i<tamanio;i++){
		vector[i]=rand();
		suma=suma+vector[i];
		if (vector[i]%2==0){
			par=par+1;}
		}
		prom=suma/tamanio;
		while (opcion!=0){
		printf ("\n1-Mostrar la cantidad de pares\n");
		printf ("2-Mostrar el promedio\n");
		printf ("0-Salir y mostrar el array invertido\n");
		printf ("Escoja una opcion\n");
		scanf ("%d", &opcion);
		switch (opcion){
		case 1: printf ("Los pares son:%d\n", par);break;
		case 2: printf ("El promedio es:%.2f\n", prom);break;
		case 0: for	(i=tamanio;i>-1;i--){
                    printf("--%d--",vector[i]);}break;
		}

}

	return 0;
}
