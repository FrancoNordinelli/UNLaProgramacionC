#include <stdio.h>
#include <stdlib.h>
#include <time.h>
/* Crear un menú que permita, crear vector, mostrar vector y elegir porque método de ordenamiento va a reorganizar el vector, 
luego que muestre el vector ordenado. */
int tamanioVector();
void cargaVectorAleatorio(int v[], int tam);
void mostarVector(int v[], int tam);
int seleccionOrdenamiento();
void ordenamientoPorBurbuja(int v[], int tam);
void ordenamientoPorSeleccion(int v[], int tam);
void ordenamientoPorInsercion(int v[], int tam);
int main(int argc, char *argv[]) {
	srand(time(0));
	int opcion;
	int opOrd=0;
		int tamanio;
		int vector[tamanio];
	do{
		printf ("\n//MENU//\n");
		printf ("1)Crear vector\n");
		printf ("2)Mostrar los numeros del vector\n");
		printf ("3)Seleccionar ordenamiento\n");
		scanf("%d", &opcion);
	switch (opcion){ 
		case 1: tamanio=tamanioVector(); break; 
		case 2: cargaVectorAleatorio(vector, tamanio);
		printf ("\n\nVectorDesordenado\n\n");
		mostarVector(vector, tamanio);break;
		case 3: opOrd=seleccionOrdenamiento();
		printf ("\n\nVector Ordenado\n\n");
		    if (opOrd=1){
			ordenamientoPorBurbuja(vector, tamanio);
		}
			if (opOrd=2){
			ordenamientoPorSeleccion(vector, tamanio);	
		}
			if (opOrd=3){
			ordenamientoPorInsercion(vector, tamanio);
		}
		printf ("\n");break;
		}
	}
	while(opcion!=5);
	return 0;
}
int tamanioVector(){
	int tam;
	printf ("Ingrese tamanio del vector\n");
	scanf ("%d", &tam);
	return tam;
}
void cargaVectorAleatorio(int v[], int tam){
	for (int i=0;i<tam;i++){
		v[i]=1+rand()%21;
	}
}
void mostarVector(int v[], int tam){
	for (int i=0; i<tam; i++){
		printf (" %d ", v[i]);
	}
	printf ("\n");
}
int seleccionOrdenamiento(){
	int opcionOrdenamiento;
	printf ("\nEscoja el método de ordenamiento\n");
		printf ("\n1)Burbuja\n");
		printf ("2)Seleccion\n");
		printf ("3)Insercion\n");
		fflush(stdin);
		scanf ("%d", &opcionOrdenamiento);
	return opcionOrdenamiento;
}
void ordenamientoPorBurbuja(int v[], int tam){
	int aux=0;
	for (int i=0;i<tam;i++){
		for (int j=0;j<tam-1;j++){
			if(v[j]>v[j+1]){
				aux=v[j];
				v[j]=v[j+1];
				v[j+1]=aux;
			}
		}
	}
}
void ordenamientoPorSeleccion(int v[], int tam){
	int min, aux, j, i;
	for (i=0;i<tam;i++){
		min=i;
		for (j=i+1;j<tam;j++){
			if (v[min]>v[j]){
				min=j;
			}
		}
		aux=v[min];
		v[min]=v[i];
		v[j]=aux;
	}
	for (int k=0;i<tam;i++){
		printf (" %d ", v[k]);
	}
}
void ordenamientoPorInsercion(int v[], int tam){
	int j,izq,der,aux, m;
	for (int i=0;i<tam;i++){
		aux=v[i];
		izq=0;der=i-1;
		while (izq<=der){
			m=(izq+der)/2;
			if (aux<v[m]){
				der=m-1;
			}
			else{
				izq=m+1;
			}
		}
		j=i-1;
		while (j>=izq){
			v[j+1]=v[j];
			j=j-1;
		}
		v[izq]=aux;
	}
	for (int i=0;i<tam;i++){
		printf (" %d ", v[i]);
	}
}
