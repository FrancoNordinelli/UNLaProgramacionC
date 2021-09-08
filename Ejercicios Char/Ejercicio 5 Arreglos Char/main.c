#include <stdio.h>
#include <stdlib.h>

/* Dadas dos palabras ordenarlas alfabéticamente */

int main(int argc, char *argv[]) {
	char palabra1[20]=" ";
	char palabra2[20]=" ";
	int Posd[20];
	int Posd2[20];
	char diccionario [26]="abcdefghijklmnopqrstuvwxyz";
	printf ("ingrese una palabra\n");
	scanf ("%s", palabra1);
	printf ("Ingrese otra palabra\n");
	scanf ("%s", palabra2);
	int j, i, cont=0, cont2=0;
	for (i=0;i<20;i++){ //
		for (j=0;j<20;j++){
			if (palabra1[i]==diccionario[j]){
				Posd[i]=j;
				cont=cont+1;}}}
				for (i=0;i<20;i++){
		for (j=0;j<26;j++){
				if (palabra2[i]==diccionario[j]){
					Posd2[i]=j;
					cont2=cont2+1;
				}}
		
	}
	printf("En Orden alfabetico:");
	for (i=0;i<20;i++){
		if (Posd[20]!=Posd2[20]){
			if (Posd[i]<Posd2[i]){
				printf ("\n%s\n", palabra1);
					printf ("%s\n", palabra2);
					fflush(stdin);}
			else{
				printf ("\n%s\n", palabra2);
				printf ("%s", palabra1);}
		}
		i=20;
	}
		if (Posd[20]=Posd2[20]){
		if (cont<cont2){
			printf ("%s", palabra1);
			printf ("%s", palabra2);
		}
		else {
			printf ("%s", palabra2);
			printf ("%s", palabra1);
		}
}
	
	return 0;
}
