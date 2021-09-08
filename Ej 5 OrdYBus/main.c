
#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/*/*Crear un menú que permita al usuario elegir el tamaño de un vector de números flotantes, 
que permita cargar el vector a mano, cargar el vector de forma aleatoria, ver el vector, ordenar el vector por burbujeo, 
que el usuario ingrese un numero y el sistema diga si ese numero esta o no en el vector.*/ 
int elegirTamanio();
int busquedaSecuencia (float v[], int tam, float num);
void cargarVectorManualmenteSinRepetir (float v[], int tam);
void cargarVectorAleatorioSinRepetir (float v[], int tam);
void ordenamientoPorBurbujeo (float v[], int tam);
void mostrarVector (float v[], int tam);
void busquedaDeNumero(float v[], int tam, float busco);
int main(int argc, char *argv[]) {
	int tamanio, opcion, numerobuscado;
	float vector[11];
	srand(time(0));
	do{ 
	    printf ("\n----Escoja una opcion----\n");
	    printf ("\n1) Escoger el tamanio del vector\n");
		printf ("2) Hacer carga manual\n");
		printf ("3) Hacer carga aleatoria\n");
		printf ("4) Ver el vector desordeando\n");
		printf ("5) Ordenar el vector y mostarlo\n");
		printf ("6) Buscar numero y salir\n");
		scanf ("%d", &opcion);
		switch(opcion){
			case 1: tamanio=elegirTamanio();break;
			case 2: cargarVectorManualmenteSinRepetir (vector, tamanio);break;
			case 3: cargarVectorAleatorioSinRepetir(vector, tamanio);break;
			case 4: mostrarVector(vector, tamanio);break;
			case 5: ordenamientoPorBurbujeo (vector, tamanio);
			mostrarVector(vector, tamanio);break;
			case 6: busquedaDeNumero(vector, tamanio, numerobuscado); break;
		}
	}
		while (opcion!=6);
	return 0;
}
int elegirTamanio(){
	int tam;
	printf (" Ingrese el tamanio del vector: \n");
	scanf ("%d", &tam);
	return tam;
}
int busquedaSecuencia (float v[], int tam, float num){
	int pos=-1;
	for (int i=0;i<tam;i++){
		if (v[i]==num){
			pos=i;
		}
	}
	return pos;
}
void cargarVectorManualmenteSinRepetir (float v[], int tam){
	int resBus=0; float num;
	for (int i=0;i<tam;i++){
		do{
		    printf (" Ingrese un numero: \n");
			scanf ("%f", &num);
			resBus=busquedaSecuencia (v, tam, num);
		}
		while (resBus!=-1);
		v[i]=num;
	}
}
void cargarVectorAleatorioSinRepetir (float v[], int tam){
	int resBus=0;
	int num=0;
	for (int i=0;i<tam;i++){
		do{
			num=1+rand()%tam;
			resBus=busquedaSecuencia (v, tam, num);
		}
		while (resBus!=-1);
		v[i]=(float)num;
	}
}
void mostrarVector (float v[], int tam){
	for (int i=0;i<tam;i++){
		printf (" %.2f ", v[i]);
	}
}
void ordenamientoPorBurbujeo (float v[], int tam){
	float aux;
	for (int i=0;i<tam;i++){
		for (int j=0;j<tam-1;j++){
			if (v[j]>v[j+1]){
				aux=v[j];
				v[j]=v[j+1];
				v[j+1]=aux;
			}
		}
	}
}
void busquedaDeNumero(float v[], int tam, float busco){
	int encontrado=0;
	printf ("\n Ingrese un numero: \n");
	scanf ("%f",&busco);
	for (int i=0;i<tam;i++){
		if (v[i]==busco){
			encontrado=1;
		}
	}
		if (encontrado==1){
			printf ("El numero esta en la lista");
		}
		else{
			printf ("El numero no esta en la lsita");
		}	
}

