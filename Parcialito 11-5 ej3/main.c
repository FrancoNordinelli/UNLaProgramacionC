#include <stdio.h>
#include <stdlib.h>
#include <time.h> 
/* Se pide crear un menú con las siguientes opciones 1, cargar un array de 5 números enteros aleatorios, 2, mostrar el array,
 3- mostrar el mínimo y el máximo del array, 4- mostrar de forma invertida los números pares del array ,
 0 - Salir y mostrar todo el array. */

int main(int argc, char *argv[]) {
	srand(time(NULL)); 
		int i, maximo, minimo, opcion, vector[5];
	do{
	printf ("1-Cargar un array de 5 numeros enteros aleatorios\n");
	printf ("2-mostrar el array\n");
	printf ("3-mostrar el mínimo y el máximo del array\n");
	printf ("4- mostrar de forma invertida los números pares del array\n");
	printf ("0 - Salir y mostrar todo el array\n");
	scanf ("%d", &opcion);
	switch (opcion){
		case 1: for (i=0;i<5;i++){
		   vector[i]=rand();
                      if(i==0){
                        minimo=vector[i];
                        maximo=vector[i];}
                      if(vector[i]<minimo){
                        minimo=vector[i];}
                      if(vector[i]>maximo){
                        maximo=vector[i];}}break;	
		case 2: for (i=0; i<4; i++){
			printf ("-%d-", vector[i]);}break;
		case 3: printf ("%d---Es el maximo\n", maximo);
		        printf ("%d---es el minimo\n", minimo);break;
		case 4: for (i=4;i>-1;i--){
			printf ("-%d-", vector[i]%2==0);}break;
		case 0: for (i=0;i<5;i++){
			printf ("-%d-", vector[i]);}
		}
		}
		while (opcion!=0);
	
	return 0;
}
