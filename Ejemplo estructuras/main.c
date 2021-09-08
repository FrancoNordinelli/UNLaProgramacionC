#include <stdio.h>
#include <stdlib.h>

struct Persona{
	int dni;
	char nombre[20];
	char sexo;
};
void cargarPersonas(struct Persona p[5]);
void mostrarPersonas(struct Persona p[5]);

int main(int argc, char *argv[]) {
	printf ("--------Estructuras en Array--------\n");
	struct Persona personas[5];
	cargarPersonas(personas);
	mostrarPersonas(personas);
	return 0;
}
void cargarPersonas(struct Persona p[5]){
	int i;
	for (i=0;i<5;i++){
		printf ("\nIngrese su dni: \n");
		scanf ("%d", &p[i].dni);
		printf ("Ingrese su sexo M/F: \n");
		fflush(stdin);
		scanf("%c", &p[i].sexo);
		fflush(stdin);
		char aux[20];
		printf ("Ingrese su nombre: \n");
		gets(aux);
		strcpy(p[i].nombre, aux);
	}
}
void mostrarPersonas (struct Persona p[5]){
int i;
for (i=0;i<5;i++){
	printf ("Persona nro: %d tiene dni %d \n", i, p[i].dni);
	printf ("Con genero %c y nombre %s \n", p[i].sexo, p[i].nombre);
	}
}
