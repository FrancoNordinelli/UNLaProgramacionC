#ifndef MATERIA_H_INCLUDED
#define MATERIA_H_INCLUDED


struct MateriaE;

typedef struct MateriaE * Materia;

Materia crearMateria(int cargaHorario, char pro[20], int cantIns);

void mostrarMateria(Materia m);

int iniciarCargaMaterias();

int getIns(Materia m);

int getCarga(Materia m);

char * getProfesor(Materia m);

void destruirMateria(Materia m);


#endif // MATERIA_H_INCLUDED
