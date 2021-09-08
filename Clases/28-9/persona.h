#ifndef PERSONA_H_INCLUDED
#define PERSONA_H_INCLUDED

struct PersonaEstructura;

//puntero PERSONA a la estructura
typedef struct PersonaEstructura * Persona;


//struct PersonaEstructura crearPersona();
//--------------CONSTRUCTOR-------------------
Persona crearPersonaPorTeclado();


//--------------MOSTRAR-------------------
void mostrarPersona(Persona p);


//--------------GET-------------------
//PRE:
//POST:
//obtener el dni y darlo al main
int getDni (Persona p);
char *  getNombre (Persona p);


//--------------SET-------------------
//Modifica el dni
void setDni(Persona p, int nuevoDni);
void setNombre(Persona p, char nuevoNombre[40]);


//--------------DESTRUCTOR-------------------
void destruirPersona(Persona p);




#endif // PERSONA_H_INCLUDED
