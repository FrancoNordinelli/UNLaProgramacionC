#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
#define RENGLONES 3
#define	COLUMNAS  5


struct Carton{
	int matriz[RENGLONES][COLUMNAS];
};
struct Jugador{
	char NombreYApelllido[30];
	int dni[10];
	int puntaje;
	struct Carton cartones[3];
};
struct Pc{
	char nombre[10];
	int dni[10];
	int puntaje;
	struct Carton cartones[3];
};

struct Jugador cargarJugador();
int main(int argc, char *argv[]) {
	srand(time(0));
	int cartones=cantCartones();
	int matriz[cartones][RENGLONES][COLUMNAS];
	int opcion;
	int bandera=0;
	int tam=90;
	int bolillero[tam];
	do{
		printf("\n---------Menu-----------\n");
		printf("\n---Ingrese una opcion---\n\n");
		printf("1)Cargar los cartones de forma aleatoria\n");
		printf("2)Hacerlo de forma manual\n");
		printf("3)Sacar bollias\n");
		printf("4)Mostrar cartones\n");
		printf("0)salir\n");
		scanf("%d",&opcion);
		system("cls");
		switch(opcion){
		case 1:	cargarCartonesAleatorio(matriz,cartones);bandera=1;break;
		case 2:	cargarCartonesPersonalizado(matriz,cartones);bandera=1;break;
		case 3:	sacarBolilla(bolillero,tam);break;
		case 4:	if (bandera=1){
		mostrarCartones(matriz,cartones);
			}
			else{
				printf ("Primero debe escoger la carga\n");
			};break;

		default: printf ("No es una opcion\n");break;
		}
	}
	while(opcion!=0);
	return 0;
}

struct Jugador cargarJugador(){
	struct Carton c;
	struct Jugador j;
	char aux[30];
	printf ("Ingrese su nombre y apellido: \n");
	gets(aux);
	strcpy(aux,j.NombreYApelllido);
	printf ("Ingrese su DNI: \n");
	scanf("%d", &j.dni);
	int cartones=cantCartones();
	j.cartones[cartones];
	int opcion;
	int matriz[RENGLONES][COLUMNAS];
	do{
		printf("1)Aleatorio\n");
		printf("2)Manual\n");
		switch(opcion){
			case 1:for(int i=0;i<cartones;i++){
				cargarCartonesAleatorio(matriz);
				break;
			}
			//case 2:
		}
	}
	while(opcion!=1||opcion!=2);
	for(int i=0;i<cartones;i++){
		for(int l=0;l<RENGLONES;l++){
			for(int k=0;k<COLUMNAS;k++){
				printf(" %d ", j.cartones)
			}
		}
	}
	return j;
}



