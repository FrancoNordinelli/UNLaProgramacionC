#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* Escribir un programa que pida tres cadenas al usuario y muestre el resultado de concatenar las dos primeras letras de las cadenas introducidas 
y que indique si las dos primeras cadenas son iguales.
Ejemplo: el usuario introduce como cadenas perro, vaca y cocodrilo. El programa mostrará por pantalla: 
“El resultado de concatenar las dos primeras letras de las cadenas es: pevaco. La primera cadena, perro, no es igual a la segunda cadena, vaca.”
Si el usuario introdujera perro, perro, mulo, el programa debería mostrar: “El resultado de concatenar las dos primeras letras de las cadenas es pepemu. 
La primera cadena, perro, es igual a la segunda cadena, perro.”
*/

int main(int argc, char *argv[]) {
	char palabra1[20]=" ";
	char palabra2[20]=" ";
	char palabra3[20]=" ";
	char palabra4[6]="";
	printf ("Ingrese la primer palara:\n");
	scanf ("%s", palabra1);
	printf ("Ingrese la segunda palara:\n");
	scanf ("%s", palabra2);
	printf ("Ingrese la tercer palara:\n");
	scanf ("%s", palabra3);
	palabra4[0] = palabra1[0];
    palabra4[1] = palabra1[1];
    palabra4[2] = palabra2[0];
    palabra4[3] = palabra2[1];
    palabra4[4] = palabra3[0];
    palabra4[5] = palabra3[1];
    printf ("El resultado de concatenar las dos primeras letras de las cadenas es:");
    printf ("%s", palabra4);
    int resComparacion=strcmp(palabra1, palabra2);
     if (resComparacion == 0){
     	printf ("\nLas palabras 1 y 2 son iguales");
	 }
	 else {
	 	printf ("\nLas palabras 1 y 2 son distintas");
	 }
	
	return 0;
}
