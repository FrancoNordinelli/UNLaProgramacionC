#include <stdio.h>
#include <stdlib.h>

/* Crear una matriz de 12 columnas y 4 renglones, de números decimales, cada valor explica las ganancias de 4 empresas distintas mes a mes.  
A- Encontrar el total ganado por cada empresa al año.
B- Encontrar cuanto se gano por mes contando a todas las empresas
C- Calcular el total ganado por todas las empresas juntas.
D- Encontrar que empresa gano mas y en qué mes.
E- Que empresa gano menos y cuándo.
F- Calcular el promedio de ganancias de cada empresa por bimestres. ¿Cuál gano mas en cada bimestre?
 */

int main(int argc, char *argv[]) {
	int ren = 4;
	int col = 6;
	int matriz [ren][col];
	int r,c, suma=0,min, max, PosC=0, PosR=0;
	
	for (r=0;r<1;r++){
		for (c=0;c<col;c++){
			printf ("Ingrese cuanto se facturo en el mes en la primer empresa\n");
		scanf("%d", &matriz[r][c]);
		suma=suma+matriz[r][c];
			max=matriz[r][c];
			min=matriz[r][c];
		if (max<matriz[r][c]){
			max=matriz[r][c];
			PosC=c;
			PosR=r;}
		if (min>matriz[r][c]){
			min=matriz[r][c];
			PosC=c;
			PosR=r;}
		}}
	for (r=1;r<2;r++){
		for (c=0;c<col;c++){
			printf ("Ingrese cuanto se facturo en el mes en la segunda empresa\n");
		scanf("%d", &matriz[r][c]);
			suma=suma+matriz[r][c];
		max=matriz[r][c];
		min=matriz[r][c];
		if (max<matriz[r][c]){
			max=matriz[r][c];
			PosC=c;
			PosR=r;}
		if (min>matriz[r][c]){
			min=matriz[r][c];
			PosC=c;
			PosR=r;}
		}}
		for (r=2;r<3;r++){
		for (c=0;c<col;c++){
			printf ("Ingrese cuanto se facturo en el mes en la tercer empresa\n");
		scanf("%d", &matriz[r][c]);
			suma=suma+matriz[r][c];
			max=matriz[r][c];
		    min=matriz[r][c];
			if (max<matriz[r][c]){
			max=matriz[r][c];
			PosC=c;}
			if (min>matriz[r][c]){
			min=matriz[r][c];
			PosC=c;
			PosR=r;}
			PosR=r;}}
		for (r=3;r<4;r++){
		for (c=0;c<col;c++){
			printf ("Ingrese cuanto se facturo en el mes en la cuarta empresa\n");
		scanf("%d", &matriz[r][c]);
			suma=suma+matriz[r][c];
			max=matriz[r][c];
		    min=matriz[r][c];
			if (max<matriz[r][c]){
			max=matriz[r][c];
			PosC=c;
			PosR=r;}
			if (min>matriz[r][c]){
			min=matriz[r][c];
			PosC=c;
			PosR=r;}
			}}
	int sumaporrenglon[ren];
	for (r=0;r<ren;r++){
	sumaporrenglon[ren]=0;
	sumaporrenglon[r]=sumaporrenglon[ren];}
	for(r=0;r<ren;r++){
		for (c=0;c<col;c++){
	sumaporrenglon[r]=sumaporrenglon[r]+matriz[r][c];}}
	int sumaporcolumna[col];
	for(c=0;c<col;c++){
		sumaporcolumna[col]=0;
		sumaporcolumna[c]=sumaporcolumna[col];}
	for(r=0;r<ren;r++){
		for (c=0;c<col;c++){
	sumaporcolumna[c]=sumaporcolumna[c]+matriz[r][c];}}
	printf ("\nGanancias anuales por empresa\n");
	for (r=0;r<ren;r++){
		printf ("Empresa  %d \n", sumaporrenglon[r]);}
	printf ("\nGanancias mensuales\n");
	for (c=0;c<col;c++){
		printf ("Empresa  %d \n", sumaporcolumna[c]);}
	printf ("Ganancias Totales\n");
	printf ("%d", suma);
	printf ("\n El minimo ganado fue %d en %d\n", min, PosR, PosC);
	return 0;}
