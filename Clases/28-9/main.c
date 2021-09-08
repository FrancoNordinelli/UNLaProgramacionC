#include <stdio.h>
#include <stdlib.h>
#include "persona.h"




int main()
{
    printf("28-9 --- Clase \n");

    //TDA <----- TIPO DE DATO ABSTRACTO

    Persona persona1 = crearPersonaPorTeclado();
    mostrarPersona(persona1);

    //Persona persona2 = crearPersonaPorTeclado();
    //mostrarPersona(persona2);


    //printf("----> Nombre: %s\n", getNombre(persona1));
    //printf("----> DNI: %d", getDni(persona1));

    //Quiero CAMBIAR/MODIFICAR el dni de la persona 5555
    //MAL
    //getDni(persona1) = 55555;
    //persona1->dni = 5555;

    setDni(persona1, 555555);
    mostrarPersona(persona1);

    setNombre(persona1, "Martin Ruino");
    mostrarPersona(persona1);

    destruirPersona(persona1);






    return 0;
}




