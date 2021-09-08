#include <stdio.h>
#include <stdlib.h>
#include "materia.h"
#include "estudiante.h"

int main()
{
    printf("Franco Nordinelli --- DNI:37995141");
    printf("Ejercicio 1: crear y agregar materias a estudiante\n");
    Materia m1=crearMateria(4,"Jorge g",90);
    Materia m2=crearMateria(8, "Federico R", 56);
    Materia m3=crearMateria(6, "Roberto G", 105);
    Materia m4=crearMateria(4, "Edagardo D", 75);
    Estudiante e=crearEstudiante("Franco", 27);
    agregarMateria(e,m1);
    agregarMateria(e,m2);
    agregarMateria(e,m3);
    agregarMateria(e,m4);
    mostrarEstudiante(e);
    /*printf("\nEjercicio 2: mostrar estudiante con materias ordenadas por titular\n");
    ordenamientoTitular(e);
    mostrarEstudiante(e);*/
    printf("\nEjercicio 3: Mostrar cantidad de alumnos\n");
    printf("La cantidad de inscriptos que cursan junto al alumno es:%d", cantAlumnos(e));
    printf("\nEjercicio 4:Eliminar materia\n");
    eliminarMateria(e,m3);
    //eliminarMateria2(e,m3);
    mostrarEstudiante(e);

    return 0;
}
