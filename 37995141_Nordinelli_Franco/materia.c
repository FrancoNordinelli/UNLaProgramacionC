#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "materia.h"
#include "estudiante.h"

struct MateriaE{
    int inscriptos;
    char profesor[20];
    int cargaHoraria;
};

int iniciarCargaMaterias(){
    Materia m=malloc(sizeof(struct MateriaE));
    strcpy(m->profesor," ");
    m->inscriptos=0;
    m->cargaHoraria=0;
    return m;

}

Materia crearMateria(int cargaHorario, char pro[20], int cantIns){

    Materia m=malloc(sizeof(struct MateriaE));
    m->cargaHoraria=cargaHorario;
    strcpy(m->profesor,pro);
    m->inscriptos=cantIns;

    return m;
}

void mostrarMateria(Materia m){
    printf("\n-------MATERIA------\n");
    printf("Titular:%s\n", m->profesor);
    printf("Alumnos:%d\n", m->inscriptos);
    printf("Horas/sem:%d\n", m->cargaHoraria);
}

int getIns(Materia m){
    return m->inscriptos;
}

int getCarga(Materia m){
    return m->cargaHoraria;
}

char * getProfesor(Materia m){
    return m->profesor;
}

void destruirMateria(Materia m){
    free(m);
}
