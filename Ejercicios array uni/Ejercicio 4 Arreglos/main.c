#include <stdio.h>
#include <stdlib.h>
#include <time.h> 

/* Crear un vector de 30 números enteros aleatorios*/

int main(int argc, char *argv[]) {
	srand(time(NULL)); 
	int vector[30];
	int i;
	for (i=0;i<29;i++){
		vector[i]=rand();
		printf ("-%d-", vector[i]);
	}


	return 0;
}
