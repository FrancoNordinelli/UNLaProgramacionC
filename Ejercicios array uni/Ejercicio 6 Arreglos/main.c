#include <stdio.h>
#include <stdlib.h>

/* Definir dos vectores de 3 elementos flotantes. Los números son ingresados por el usuario en ambos vectores. 
Una vez creado los dos vectores mostrarlos y realizar:
A:   V1 + V2   Suma de vectores
B:    V1 – V2   Resta de vectores
C:   V1.V2      Producto escalar de vectores
D:    3.V1       Producto por un escalar de vectores*/

int main(int argc, char *argv[]) {
	float V1[3], sumaV1=0;
	int i;
	for(i=0;i<3;i++){
	printf ("Ingrese los 3 valores del primer vector\n");
	scanf ("%f", &V1[i]);
	sumaV1=sumaV1+V1[i];}
	float V2[3], sumaV2=0;
	for(i=0;i<3;i++){
	printf ("Ingrese los 3 valores del segundo vector\n");
	scanf ("%f", &V2[i]);
	sumaV2=sumaV2+V2[i];}
	printf ("V1 ");
	for(i=0;i<3;i++){
	printf (" -- %.2f -- ", V1[i]);}
	printf ("\nV2 ");
    for(i=0;i<3;i++){
	printf (" -- %.2f -- ", V2[i]);}
	printf ("\nSuma de vectores\n");
	for (i=0;i<3;i++){
		printf (" --%.2f-- ", V1[i]+V2[i]);
	}
	printf ("\nResta de vectores\n");
	for (i=0;i<3;i++){
		printf (" -- %.2f -- ", V1[i]-V2[i]);
	}
	printf ("\nProducto escalar de vectores\n");
	for (i=0;i<3;i++){
		printf (" -- %.2f -- ", V1[i]*V2[i]);}
		printf ("\nProducto de vectores %.2f\n", sumaV1*sumaV2);
	
	return 0;
}
