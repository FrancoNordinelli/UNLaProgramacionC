#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "cartones.h"
#include "Jugadores.h"
#define COLUMNA 5
#define REN 3
#define RENGLON "\n------------------------------------------------\n"

int main(){

	srand(time(0));

	int eleccion=0;
	Jugador j1 = cargarJugadorPorTeclado();
	eleccion = elegirCarton();
	Computadora pc=cargarJugadorPc();leerPuntajes();
	comenzarPartida(j1,pc,eleccion);
	
	guardarPuntajes (j1,pc);
    return 0;
}
