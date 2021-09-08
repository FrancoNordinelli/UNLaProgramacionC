#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "personas.h"

int main(int argc, char *argv[]) {
	
	
	Persona persona1;
	persona1=cargarPersona();
	printf ("\nDatos de la Persona\n");
	mostrarPersonas(persona1);
	printf ("\n");
	printf ("\nDNI: %d", getDni(persona1));
	printf ("\nNombre: %s", getNombreYApellido(persona1));
	setEdad(persona1, 80);
	printf ("\nEdad: %d", getEdad(persona1));
	printf ("\nNombre: %s", getNombreYApellido(persona1));
	destruirPersona(persona1);
	return 0;
}
