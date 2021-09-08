#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Crear aleatoriamente 2 matrices de 4x4 y generar matrices nuevas donde se:
A- Haga Matriz1 + Matriz2
B- Haga Matriz1 – Matriz2
C- Matriz1.Matriz2
*/

int main(int argc, char *argv[]) {
	 srand(time(0));
	 int ren=4;
	 int col=4;
	 int r,c;
	 int MA [ren][col];
	 int MB [ren][col];
	 for (r=0;r<4;r++){
	 	for(c=0;c<4;c++){
	 		printf ("  %d   ", MA[r][c]=rand());
		 }
		 printf ("\n");
	 }
	 printf ("\n");
	 for (r=0;r<4;r++){
	 	for(c=0;c<4;c++){
	 		printf ("  %d  ", MB[r][c]=rand());
		 }
		 printf ("\n");
	 }
	 printf ("\n");
	 int MC[ren][col];
	 for (r=0;r<4;r++){
	 	for (c=0;c<4;c++){
	 	MC[r][c]=MA[r][c]+MB[r][c];
		 }
	 }
	 printf ("Matriz C\n");
	 for (r=0;r<4;r++){
	 	for(c=0;c<4;c++){
	 		printf ("  %d  ", MC[r][c]);
		 }
		 printf ("\n");
	 }
	 for (r=0;r<4;r++){
	 	for (c=0;c<4;c++){
	 	MC[r][c]=(MA[r][c]*MB[r][c])+(MA);
		 }
	 }
	return 0;
}
