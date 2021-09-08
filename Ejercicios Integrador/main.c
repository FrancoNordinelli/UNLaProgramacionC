#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/* Ejercicio Integrador Vectores y Matrices: Realizar un programa que simule el comportamiento del juego de azar, Quini 6. 
-El jugador compra una boleta con 6 números, del 0 al 45, los puede elegir o comprar de forma aleatoria, no puede tener números repetidos.
-Se realiza la primer jugada, es decir, salen 6 números aleatorios, no repetidos, entre el 0 y el 45. Si el jugador acierta los 6 números gana 5 millones de pesos. 
Si solo acierta 5 números el jugador gana 200mil pesos, si acierta 4 de los números el jugador gana 500 pesos. 
-Re realiza la revancha, aquí el jugador gana solo si acierta los 6 números, gana un total de 2 millones de pesos. 
-Luego se realiza la 3er jugada, donde se sortean otros 6 números. Aquí el jugador gana un millón, 100mil o 2mil pesos si acierta 6, 5 o 4 números respectivamente. 
-Por ultimo, se juntan los 3 sorteos, 18 números en total. Si el jugador tiene 6 números de esos 18 gana un total de mil pesos. 

Realizar un menú que permita comprar la boleta, e ir realizando los sorteos para ver si se gana o no algo en cada sorteo.
Realizar un bucle que repita el sorteo hasta que se gane el pozo de los 6 aciertos en la primer jugada. 
El bucle termina cuando se acertaron todos los números, debe mostrar por pantalla los números, lo que gano y la cantidad de sorteos que pasaron para que gane. 
*/

int main(int argc, char *argv[]) {
	int opcion;
	int numeros[6];
	int numerosGanadores[6];
	int i, j, cont=0;
	srand (time(NULL));
	printf ("BIENVENIDO AL SORTEO!!!\n");
	printf ("----------------------------------\n");
	    for (i=0;i<6;i++){
			numerosGanadores[i]=rand()%46;
		}
		printf ("1-Numeros aleatorios\n");
		printf ("2-Escoja usted mismo los numeros\n");
		scanf ("%d", &opcion);
		switch (opcion){
			case 1: for (i=0;i<6;i++){
				numeros[i]=rand()%46;
			};break;
			case 2: for (i = 0;i < 6; i++){
				printf ("Escoja un numero:");
				scanf ("%d", &numeros[i]);
				if (numeros[i]>45){
					printf ("El numero debe ser menor o igual a 45 y no debe repetirse\n");
					i=i-1;
				}
		};break;
	}
		printf ("\n");
		printf ("Sus numeros son: ");
		for (i=0;i<6;i++){
			printf ("  %d  ", numeros[i]);
		}
		printf ("\n\n");
		for (i=0;i<6;i++){
			for(j=0;j<6;j++){
				if (numeros[i]==numerosGanadores[j]){
					cont++;
				}
			}
		}
		if (cont==6){
			printf ("SACO EL GORDO!!!!GANO $5 MILLONES\n");
		}
		if (cont==5){
			printf ("FELICIDADES!!!HA GANADO $200mil");
		}
		if (cont==4){
			printf ("Ha ganado $500\n");
		}
		else{
			printf ("Siga participando\n");
		}
	return 0;
}
