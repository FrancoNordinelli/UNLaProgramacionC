#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "materia.h"
#include "estudiante.h"
#define CANTMATERIAS 10

struct EstudianteE{
    char nombre[40];
    int edad;
    int contadorMateria;
    Materia materias[10];
};

Estudiante crearEstudiante(char n[40], int edad){

    Estudiante e=malloc(sizeof(struct EstudianteE));
    e->contadorMateria=0;
    for(int i=0;i<CANTMATERIAS;i++){
        e->materias[i]=iniciarCargaMaterias();
    }
    strcpy(e->nombre,n);
    e->edad=edad;

    return e;

}

void agregarMateria(Estudiante e, Materia m){
    e->materias[e->contadorMateria]=crearMateria(getCarga(m), getProfesor(m), getIns(m));
    e->contadorMateria++;

}

void mostrarEstudiante(Estudiante e){
    printf("\n------Estudiante------\n");
    printf("Nombre:%s\n", e->nombre);
    printf("Edad:%d\n", e->edad);
    for(int i=0;i<e->contadorMateria;i++){
        mostrarMateria(e->materias[i]);
    }
}

int cantAlumnos(Estudiante e){
    int cantidad;
    Materia m;
    for(int i=0;i<e->contadorMateria;i++){
        cantidad=getIns(e->materias[i]);
    }
    return cantidad;
}

/*void ordenamientoTitular(Estudiante e){
    int aux;
    for(int i=0;i<e->contadorMateria;i++){
        for(int j=0;j<e->contadorMateria-1;j++){
            if(strcmp(getProfesor(e->materias[j])), getProfesor(e->materiasj+1)>0){
                aux=e->materias[j]
                e->materias[j]=materias[j+1];
                e->materias[j+1]=aux;
            }
        }
    }
}*/

void eliminarMateria(Estudiante e, Materia m){
    e->materias[2]=iniciarCargaMaterias();
    e->contadorMateria--;
}

void eliminarMateria2(Estudiante e, Materia m){
    destruirMateria(m);
}
