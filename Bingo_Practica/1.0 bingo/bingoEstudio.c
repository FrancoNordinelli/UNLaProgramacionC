#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include "bingoEstudio.h"
#define RENGLONES 3
#define	COLUMNAS  5


int cantCartones(){
	int cartones=0;
	while(cartones!=1&&cartones!=2&&cartones!=3){ //es lo mismo que cartones<1||cartones>3. No ||, porque qeudaría: mientras cartones sea distinto de 1, 2 o 3
	//y se crearía un loop
	printf ("\nIngrese la cantidad de cartones con las que desea jugar: \n"); //1<=cartones<=3
	scanf("%d", &cartones);
	if(cartones<1||cartones>3){
		printf ("\nDebe escoger 1, 2 o 3 cartones!!");
		}
	}
	return cartones;
}

void cargarCartonesAleatorio(int matriz[RENGLONES][COLUMNAS]){
	int cantPosiciones=RENGLONES*COLUMNAS;
	//Paso 1: genero el número de la primera posición
	int numeros[cantPosiciones];
	numeros[0]=1+rand()%90;
	int i=1;
	int encontrado;
	//Paso 2: mientras el contador i no sea igual a la cantPosiciones, genero el siguiente número
	while(i!=cantPosiciones){
		numeros[i]=1+rand()%90;
	//Paso 3: lo comparo con las posiciones anteriores
		encontrado=0;
		//si el número es igual al número de una posición anterior, la bandera encontrado=1;
		for(int j=0;j<i;j++){
			if (numeros[i]==numeros[j]){
			encontrado=1;
				}
			}
			//si encontrado=0(el número se comparó y no se encontró otro igual), el número generado se guarda y aumenta el contador.
		if(encontrado==0){
			numeros[i]=numeros[i];
			i++;
		}
	}
	//por último pasamos los número del vector a la matriz	
	int cont=0;
		for(int j=0;j<RENGLONES;j++){
			for(int k=0;k<COLUMNAS;k++){
				matriz[j][k]=numeros[cont];
				cont++;
			
		}
	}
}

void cargarCartonesPersonalizado(int matriz[][RENGLONES][COLUMNAS], int cartones){
	int cantPosiciones=cartones*COLUMNAS*RENGLONES;
	int numeros[cantPosiciones];
	do{
	printf ("\nIngrese el primer numero: \n");
	scanf("%d", &numeros[0]);
		if(numeros[0]<1||numeros[0]>90){
		printf("\nEl número debe estar en el rango de 1-90!!!");
		}
	}
	while(numeros[0]<1||numeros[0]>90);
	int i=1;
	int encontrado;
	while(i!=cantPosiciones){
		do{
		printf("\nIngrese el siguiente numero: \n");
		scanf("%d", &numeros[i]);
		if(numeros[i]<1||numeros[i]>90){
			printf("Debe estar en el rango de 1-90!!");
			}
		}
		while(numeros[i]<1||numeros[i]>90);
		encontrado=0;
		for(int j=0;j<i;j++){
			if(numeros[i]==numeros[j]||numeros[i]<1||numeros[i]>90){
				encontrado=1;
				printf("\nEl numero ya fue ingresado");
			}
		}
		if(encontrado==0){
			numeros[i]=numeros[i];
			i++;
		}
	}
		int cont=0;
	for(int i=0;i<cartones;i++){
		for(int j=0;j<RENGLONES;j++){
			for(int k=0;k<COLUMNAS;k++){
					matriz[i][j][k]=numeros[cont];
					cont++;
				}
			}
		}
}
void cargarNumerosPc(int matriz[][RENGLONES][COLUMNAS], int cartones){
		int cantPosiciones=cartones*RENGLONES*COLUMNAS;
	int numeros[cantPosiciones];
	numeros[0]=1+rand()%90;
	int i=1;
	int encontrado;
	while(i!=cantPosiciones){
		numeros[i]=1+rand()%90;
		encontrado=0;
		for(int j=0;j<i;j++){
			if (numeros[i]==numeros[j]){
			encontrado=1;
				}
			}
		if(encontrado==0){
			numeros[i]=numeros[i];
			i++;
		}
	}	
	int cont=0;
	for(int i=0;i<cartones;i++){
		for(int j=0;j<RENGLONES;j++){
			for(int k=0;k<COLUMNAS;k++){
					matriz[i][j][k]=numeros[cont];
					cont++;
				}
			}
		}
}
void mostrarCartones(int matriz[][RENGLONES][COLUMNAS], int c){
	for(int i=0;i<c;i++){
		for(int j=0;j<RENGLONES;j++){
			for(int k=0;k<COLUMNAS;k++){
				printf(" %d ", matriz[i][j][k]);
			}
			printf("\n");	
		}	
	}
}

void sacarBolilla(int vector[], int tam){
	//genero un número para ponerlo en la primera posición del vector
	vector[0]=1+rand()%90;
	int i=1;
	int encontrado;
	//se crea un bucle que termina cuando i llega a tam (i=1, tam=90).
	while(i!=tam){
		//se genera un número en la posición i del vector.
		vector[i]=1+rand()%90;
		encontrado=0;
		//este bucle compara los números guardados en las posiciones j del vector con el que se genero para la posición i.
		for(int j=0;j<i;j++){
			if(vector[i]==vector[j]){
				//si el número generado para el vector en la posición i se repite con alguno ya gaurdado en el vector en la posición j, 
				//la bandera encontrado=1...
				encontrado=1;
			}
		}
		//caso contrario, el número se guarda en la posición i y aumenta el contador i. Si el número es repetido, i no aumenta
		if(encontrado==0){
			vector[i]=vector[i];
			i++;
		}
	}
}

void mostrarBolillero(int vector[], int tam){
	for(int i=0;i<tam;i++){
		printf("-%d", vector[i]);
	}
}

