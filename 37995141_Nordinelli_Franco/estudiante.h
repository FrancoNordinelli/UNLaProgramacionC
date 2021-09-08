#ifndef ESTUDIANTE_H_INCLUDED
#define ESTUDIANTE_H_INCLUDED

struct EstudianteE;

typedef struct EstudianteE * Estudiante;

Estudiante crearEstudiante(char n[40], int edad);

void mostrarEstudiante(Estudiante e);

void agregarMateria(Estudiante e, Materia m);

int cantAlumnos(Estudiante e);

void eliminarMateria(Estudiante e, Materia m);

void ordenamientoTitular(Estudiante e);

void eliminarMateria2(Estudiante e, Materia m);

#endif // ESTUDIANTE_H_INCLUDED
