#include <stdio.h>
#include <stdlib.h>
#include "persona.h"



struct PersonaEstructura{

    char nombre[40];
    int dni;


};


//struct PersonaEstructura crearPersona();
Persona crearPersonaPorTeclado(){


    //Crear Persona local
    Persona p = malloc(sizeof(struct PersonaEstructura));

    printf("Ingrese el dni:\n");
    scanf("%d", &(p->dni));

    char aux[40]=" ";
    printf("Ingrese el nombre:\n");
    fflush(stdin);
    gets(aux);

    strcpy(p->nombre, aux);


    return p;
}

void mostrarPersona(Persona p){

    printf("\n--------PERSONA---------\n");
    printf("El nombre es: %s\n", p->nombre );
    printf("El dni es: %d\n", (*p).dni);


};


int getDni (Persona p){

    return p->dni;
}

char *  getNombre (Persona p){

    return p->nombre;
}



void setDni(Persona p, int nuevoDni){


    p->dni = nuevoDni;

};


void setNombre(Persona p, char nuevoNombre[40]){

    strcpy(p->nombre, nuevoNombre);

};


void destruirPersona(Persona p){

    free(p);
}



