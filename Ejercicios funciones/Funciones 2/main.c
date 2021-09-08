#include <stdio.h>
#include <stdlib.h>
#include <string.h> 

/* 2) Devolver 0 si es falso, 1 si es cierto, probarlo en el main, con casos positivos y negativos:
*/
int esBisiesto(int anio);
int sonIguales(char nombre1[], char nombre2[]);
int esMayorDeEdad(int anioNacimiento, int anioHoy);
int esPalindromo(char oracion[100]);
int main(int argc, char *argv[]) {
	int anio;
	int tamanio=20;
	char nombre1[tamanio];
	char nombre2[tamanio];
	int tamanio1=100;
	char oracion[tamanio1];
	printf ("%d\n", esBisiesto(anio));
	printf ("%d\n",sonIguales(nombre1, nombre2)); 
	int anioNacimiento, anioHoy;
	printf ("%d\n", esMayorDeEdad(anioNacimiento, anioHoy));
	printf ("%d\n", esPalindromo(oracion));
	return 0;
}
int esBisiesto(int anio){
	int devolucion;
    printf( "\n   Introduzca un anio: ");
    scanf("%d", &anio);
    if ( anio % 4 == 0 && anio % 100 != 0 || anio % 400 == 0 ){
    	devolucion=1;
	}
    else{
    	devolucion=0;
	}
	return devolucion;
}
int sonIguales(char nombre1[], char nombre2[]){
	printf ("Escriba un nombre :\n");
	fflush(stdin);
	gets(nombre1);
	printf ("Escriba un nombre :\n");
	fflush(stdin);
	gets(nombre2);
	int retorno;
    if(strcmp(nombre1, nombre2)==0){
        retorno = 1;
    } else {
        retorno = 0;
    }
    return retorno;
}
int esMayorDeEdad(int anioNacimiento, int anioHoy){
	anioHoy = 2020;
	int retorno;
	printf ("¿En que año naciste :\n");
	scanf("%d", &anioNacimiento);
	if (anioHoy-anioNacimiento<18){
		retorno = 0;
	}
	else {
		retorno = 1;
	}
	return retorno;
}
int esPalindromo(char oracion[100]){
	printf ("Escriba una oracion :\n");
	gets(oracion);
	char letras[54]="abcdefghijklmnñopqrstuvwxyzABCDEFGHIJKLMNÑOPQRSTUVWXYZ";
	int i, tamanio, retorno;
	for (i=0;i<100;i++){
		int cont=0;
		if (oracion[i]==letras[i]){
			cont++;
		}
		tamanio=cont;
	}
	char copiaoracion[tamanio];
	for (i=0;i<tamanio;i++){
		if (copiaoracion[i]==copiaoracion[tamanio]){
			retorno=1;
		}
		else {
			retorno=0;
		}
		tamanio--;
	}
	return retorno;
}

