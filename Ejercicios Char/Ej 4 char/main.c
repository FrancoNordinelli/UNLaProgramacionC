#include <stdio.h>
#include <stdlib.h>

/* Escribir el nombre de dos personas y decidir si son o no el mismo nombre. En caso de ser nombres distintos generar un tercer nombre componiendo ambos. */

int main(int argc, char *argv[]) {
	char nombre1[20]=" ";
	char nombre2[20]=" ";
	char letras[52]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
	char nombre3[41]=" ";
	printf ("Escriba el nombre de una persona:");
	gets(nombre1);
	printf ("Escriba el nombre de una persona:");
	gets(nombre2);
	int i=0, j=0, k=0, comparacion=0;
	for (i=0;i<20;i++){
		for (j=0;j<52;j++){
			if (nombre1[i]==letras[j] && nombre2[k]==letras[j]){
				if (nombre1[i]==nombre2[k]){
					k++;
					comparacion=1;
				}
				else {
					comparacion=0;
				}
			}
		}
	}
	if (comparacion==1){
		printf ("Es el mismo nombre");
	}
	else{
		printf ("Son nombres distintos\n");
	}
	if (comparacion==0){
		for ( i = 0; i<20; i++){
          nombre3[i]= nombre1[i];
		  }
		
		for ( i = 20; i<40; i++){
	         nombre3[i]= nombre2[i-20];
		  
		}
	  }

	for (i=0;i<40;i++){
		printf ("%c", nombre3[i]);
	}
	return 0;
}
