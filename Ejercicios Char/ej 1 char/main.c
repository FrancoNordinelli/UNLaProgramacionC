#include <stdio.h>
#include <stdlib.h>

/* Escribir una oración, contar la cantidad de letras vocales y la cantidad de consonantes.  Cuidado, las oraciones pueden tener símbolos y números.*/

int main(int argc, char *argv[]) {
	char vocales[10]="aeiouAEIOU";
	char consonantes[42]="bcdfghjklmnpqrstvwxyzBCDFGHJKLMNPQRSTVWXYZ";
	char oracion[50];
	printf ("Escriba una oracion:");
	gets(oracion);
	 int i;//Mostrar oracion
     for ( i = 0; i<20; i++){
     printf("%c", oracion[i]);
      }
      int j, contcons=0;
      for (i=0;i<50;i++){//contador de consonantes
      	for (j=0;j<42;j++){
      		if (oracion[i]==consonantes[j]){
      			contcons=contcons+1;
			  }
		  }
	  }
	  int contvocal=0;
	  for (i=0;i<50;i++){//contador de vocales
      	for (j=0;j<10;j++){
      		if (oracion[i]==vocales[j]){
      			contvocal=contvocal+1;
      		}
      	}
      }
      //Mostrar por pantalla cantidad de vocales y de consonantes
      printf ("\nLa cantidad de consonantes es: %d", contcons);
      printf ("\nLa cantidad de vocales es: %d", contvocal);
	return 0;
}
