#include <stdio.h>
#include <stdlib.h>

/* Pedir que se ingrese por teclado un numero n, conseguir el numero de la posición n de la sucesión de Fibonacci.  
Recuerde que {0,1,1,2,3,5,8,13……,n} . 
Donde cada posición se obtiene al sumar las dos anteriores*/

int main(int argc, char *argv[]) {
	int npos;
	int i=0;
	int a = 1;
	int b=1;
	int c=a+b;
	printf ("Ingrese un numero (posicion de Fibonacci):\n");
	scanf ("%d", &npos);
	while (i<npos-2){
		i++;
		a=b;
		b=c;	
		c=a+b;	
	}
	printf ("%d", c);
	return 0;
}
