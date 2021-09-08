#include <stdio.h>
#include <stdlib.h>

/* Escribir una oración y mostrarla de atrás hacia adelante */

int main(int argc, char *argv[]) {
	char oracion[20]="Hola soy franco";	
	int i;
	for (i=14;i>-1;i--){
		printf ("%c", oracion[i]);}
	return 0;
}
