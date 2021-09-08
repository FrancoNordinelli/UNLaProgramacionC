#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* Escribir un programa que pida tres cadenas al usuario y muestre su longitud (número de letras).
Ejemplo: el usuario introduce como cadenas perro, pez y cocodrilo. El programa mostrará por pantalla. 
El número de letras para perro es 5. El número de letras para pez es 3. El número de letras para cocodrilo es 9.
 */

int main(int argc, char *argv[]) {
	char cadena[40];
	char cadena2[40];
	char cadena3[40];
	char letras[52]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	int i, j;
	printf ("Escriba una oracion\n");
	gets(cadena);
	printf ("Escriba una segunda oracion\n");
	gets(cadena2);
	printf ("Escriba una tercera oracion\n");
	gets(cadena3);
	for (i=0;i<40;i++){
		for (j=0;j<52;j++){
			if (cadena[i]==letras[j]){
			}
		}
	}
	printf ("Cadena tiene longitud %d (uno mas contando \\0) \n",    strlen(cadena));
	return 0;
}
