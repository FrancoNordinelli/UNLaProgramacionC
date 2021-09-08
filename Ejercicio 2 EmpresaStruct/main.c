#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* Se tiene la estructura Empresa, Empleado y Fecha, las 3 anidadas. 
Se propone trabajar primero con Empleado y Fecha. Cada empleado posee 2 fechas, una de nacimiento y otra de ingreso a la empresa. 
Se pide cargar empleados en un vector. Mostrar los empleados. Ordenarlos por sueldo. Ordenarlos por nombre. Validad su CUIT. 
Una vez terminado todo esto se pide crear un vector de empresas y generar los procedimientos cargar, mostrar y ordenar. 
*/
struct Fecha {
	int dia, mes, anio;
};
struct FechaIngreso{
	int diaI, MesI, anioI;//No se pueden repetir las variables del struct Fecha.
};
struct Empleado{
	char nombre[20];
	char apellido[20];
	char sexo; //M o F;
	double dni;
	double cuit;
	double sueldo;
	 
};
struct Fecha cargarFecha();
struct FechaIngreso cargarFechaIngreso();
struct Empleado cargarEmpleados(struct Empleado e[], int tam);
void mostrarEmpleados(struct Empleado e[], int tam);
void mostrarEmpleados(struct Empleado e[], int tam);
int main(int argc, char *argv[]) {
	int cantEmpleados;
	printf ("Ingrese la cantidad de empleados:\n");
	scanf("%d", &cantEmpleados);
	struct Empleado ArrayEmpleados[cantEmpleados];
	cargarEmpleados(ArrayEmpleados, cantEmpleados);
	mostrarEmpleados(ArrayEmpleados, cantEmpleados);
	mostrarEmpleados(ArrayEmpleados, cantEmpleados);
	return 0;
}

struct Empleado cargarEmpleados(struct Empleado e[], int tam){
	char aux[40]=" ";
	for (int i=0;i<tam;i++){
	printf ("Ingrese el nombre:\n");
	fflush(stdin);
	gets (aux);
	strcpy(e[i].nombre, aux);
	printf ("Ingrese el apellido:\n");
	fflush(stdin);
	gets(aux);
	strcpy(e[i].apellido,aux);
	printf ("Ingrese el sexo:\n");
	scanf("%c", &e[i].sexo);
	printf ("Ingrese el sueldo:\n");
	scanf ("%d", &e[i].sueldo);
	printf ("Ingrese el dni:\n");
	scanf ("%d", &e[i].dni);
	printf ("Ingrese el cuit:\n");
	scanf ("%d", &e[i].cuit);
	printf ("\nIngreso a la empresa\n");
	cargarFecha();
	}
}
struct Fecha cargarFecha(){
	struct Fecha f;
	printf ("Ingrese el anio de ingreso: \n");
	scanf ("%d", &f.anio);
	printf ("Ingrese el mes de ingreso: \n");
	scanf ("%d", &f.mes);
	printf ("Ingrese el dia de ingreso: \n");
	scanf ("%d", &f.dia);
	return f;
}
void mostrarEmpleados(struct Empleado e[], int tam){
	for (int i=0;i<tam;i++){
		printf("\n-----Datos del Empleado----\n");
		printf ("\n Empleado %d\n",i);
		printf ("Nombre: %s\n", e[i].nombre);
		printf ("Apellido: %s\n", e[i].apellido);
		printf ("Sexo: %c\n", e[i].sexo);
		printf ("DNI: %d\n", e[i].dni);
		printf ("CUIT: %d\n", e[i].cuit);
		printf ("Sueldo: %d\n", e[i].sueldo);
	}
}
void ordenarEmpleadosSueldo(struct Empleado empleados[], int cantidad){
	//Aca lo importante, el auxiliar es una estructura
	struct Empleado aux;
	int i,j= 0;
	for (i = 0; i<cantidad; i++){
	for (j = 0; j<cantidad-1; j++){
	if(empleados[j].sueldo>=empleados[j+1].sueldo){	
	aux = empleados[j];
	empleados[j]=empleados[j+1];	
	 empleados[j+1]=empleados[j];
			}
		}
	}
}

