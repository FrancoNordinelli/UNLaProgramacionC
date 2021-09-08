#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "jugadores.h"
#include "cartones.h"
#define COLUMNA 5
#define REN 3
#define RENGLON "\n------------------------------------------------\n"


struct JugadorE{
char nombreYApellido[50];
int dni;
float puntaje;
Carton cartones[4];

};

struct ComputadoraE{
float puntaje;
Carton cartones[3];

};

Jugador cargarJugadorPorTeclado (){
    Jugador j = malloc(sizeof(struct JugadorE));

   printf(RENGLON);
   printf("        BIENVENIDO AL JUEGO DEL BINGO");
   printf(RENGLON);
   printf("(Se recomienda jugar con pantalla completa)\n\n");
    char aux[50]=" ";
	printf("\nIngrese su nombre y apellido\n");
   	fflush(stdin);
   	gets(aux);
   	strcpy(j->nombreYApellido,aux);
printf(RENGLON);
   	printf("Ingrese su DNI\n");
   	scanf("%d",&j->dni);
printf(RENGLON);
j->puntaje=0;

return j;
}
Computadora cargarJugadorPc (){

Computadora p = malloc(sizeof(struct ComputadoraE));

p->puntaje=0;

return p;}


void mostrarPuntajes(Jugador m ,Computadora p){

    printf(RENGLON);
         printf("PUNTAJES");
         printf(RENGLON);
         printf("PUNTAJE DE %s = %.2f",getNombreYapellido(m),getPuntaje(m));
         printf(RENGLON);
         printf("PUNTAJE DEL RIVAL = %.2f ",getPuntajePc(p));
         printf(RENGLON);

}

void guardarPuntajes (Jugador ju,Computadora pc){
   FILE*punteroPuntaje = fopen("puntaje.txt", "a");

   //if (getPuntaje(ju) != -1 && getPuntajePc(pc) != -1){
        fprintf(punteroPuntaje, "El puntaje de %s es: %.2f\n",getNombreYapellido(ju),getPuntaje(ju));
        fprintf(punteroPuntaje, "El puntaje de la PC es: %.2f\n", getPuntajePc(pc));
   //}

    fclose(punteroPuntaje);

}

void leerPuntajes(){

char aux[50]=" ";

FILE*punteroPuntaje =fopen("puntaje.txt","r");

while(!feof(punteroPuntaje)){
fgets(aux,50,punteroPuntaje);
printf("%s \n",aux);

}
fclose(punteroPuntaje);
}

//---------------gets--------------//
char* getNombreYapellido(Jugador j){

return j->nombreYApellido;}


void setPuntaje( Jugador j, int puntaje){ j->puntaje = puntaje ; }
void setPuntajePc( Computadora p, int puntaje){ p->puntaje =puntaje; }

float getPuntaje(Jugador j){return j->puntaje;}
float getPuntajePc(Computadora p){return p->puntaje;}


