#include <stdio.h>
#include <stdlib.h>
#include <time.h>
int main(int argc, char *argv[]) {
	printf("Soy Nordinelli Franco, DNI: 37995141 y me corresponde el tema 2\n");
	srand(time(NULL));
	int i, tamanio, j, k;
	int suma1=0;
	int suma2=0;
	float prom;
	printf ("Ingrese el tamanio del vector\n");
	fflush (stdin);
	scanf("%d", &tamanio);
	int vector[tamanio];
	int vectorb[tamanio];
	for (i=0;i<tamanio;i++){
			vector[i] = rand()%41-20;
			suma1=suma1+vector[i];
			}
			
			fflush (stdin);
			for (i=0; i<tamanio;i++){
			if (vector[i]%2==0){
			vectorb[i]=(vector[i]*-5);}
			if (vector[i]%2!=0 && vector[i>5]) {
			vectorb[i]=vector[i]*-1;
			suma2=suma2+vectorb[i];
			}
		}
	int suma3=suma1+suma2;
	prom=(suma1+suma2)/i;	
	printf ("Vector:\n\n");
	for(i=0;i<tamanio;i++){
		printf ("  %d--- ", vector[i]);
	}
	printf ("\n\n");
	printf ("Vectorb:\n");
	for(i=0;i<tamanio;i++){
		printf ("%d--- ", vectorb[i]);
	}
	printf ("\nEl promedio es:%.2f\n", prom);
	printf ("La suma es:%d", suma3);
	return 0;
}
