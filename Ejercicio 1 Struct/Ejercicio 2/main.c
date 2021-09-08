#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdlib.h>
/* Se tiene la estructura Empresa, Empleado y Fecha, las 3 anidadas.
Se propone trabajar primero con Empleado y Fecha. Cada empleado posee 2 fechas, una de nacimiento y otra de ingreso a la empresa.
Se pide cargar empleados en un vector. Mostrar los empleados. Ordenarlos por sueldo. Ordenarlos por nombre. Validad su CUIT.
Una vez terminado todo esto se pide crear un vector de empresas y generar los procedimientos cargar, mostrar y ordenar.
*/
struct Fecha{
	int anio;
	int mes;
	int dia;
};
struct Empleado{
	char nombre[20];
	char apellido[20];
	char dni[9];
	char cuit[12];
	char sexo;//m o f
	float sueldo;
	struct Fecha nacimientoEIngreso[2];
};
struct Empresa{
	char nombreEmpresa[20];
	char direccion[40];
	struct Empleado empleados;
};
struct Empleado cargarEmpleado();
void cargarEmpleados(struct Empleado empleados[], int cantidad);
void mostrarEmpleado(struct Empleado empleado);
void mostrarEmpleados(struct Empleado empleados[], int cantidad);
void ordenarEmpleadosSueldo(struct Empleado empleados[], int cantidad);
void ordenarEmpleadosNombre(struct Empleado empleados[], int cantidad);


int main(int argc, char *argv[]) {
 	int cantidadDeEmpleadosACargar;
 	printf ("Ingrese la cantidad de empleados:\n");
 	scanf ("%d", &cantidadDeEmpleadosACargar);
 	struct Empleado empleados[cantidadDeEmpleadosACargar];
 	cargarEmpleados(empleados, cantidadDeEmpleadosACargar);
	ordenarEmpleadosSueldo(empleados, cantidadDeEmpleadosACargar);
	printf ("\nOrdenados por Sueldo\n");
 	mostrarEmpleados(empleados, cantidadDeEmpleadosACargar);
 	printf ("\nOrdenados por Nombre\n");
	ordenarEmpleadosNombre(empleados, cantidadDeEmpleadosACargar);
 	mostrarEmpleados(empleados, cantidadDeEmpleadosACargar);
	return 0;
}


struct Empleado cargarEmpleado(){
	struct Empleado empleado;
	char nombreAux[20];
	char apellidoAux[20];
	char dniAux[8];
	char cuitAux[11];
	printf("Ingrese el nombre:\n");
	fflush(stdin);
	gets(nombreAux);
	strcpy(empleado.nombre, nombreAux);
	//printf("Ingrese el apellido:\n");
	//fflush(stdin);
	//gets(apellidoAux);
	//strcpy(empleado.apellido, apellidoAux);
	//printf("Ingrese el DNI:\n");
	//fflush(stdin);
	//gets(dniAux);
	//strcpy(empleado.dni, dniAux);
	//printf("Ingrese el CUIT:\n");
	//fflush(stdin);
	//gets(cuitAux);
	//strcpy(empleado.cuit, cuitAux);
	//printf("Ingrese el sexo:\n");
	//fflush(stdin);
	//scanf("%c", &empleado.sexo);
	printf("Ingrese el sueldo:\n");
	fflush(stdin);
	scanf("%f", &empleado.sueldo);
	//cargo las fechas
	//printf("Ingrese el anio de nacimiento: \n");
	//scanf("%d", &empleado.nacimientoEIngreso[0].anio);
	//printf("Ingrese el mes de nacimiento: \n");
	//scanf("%d", &empleado.nacimientoEIngreso[0].mes);
	//printf("Ingrese el dia de nacimiento: \n");
	//scanf("%d" ,&empleado.nacimientoEIngreso[0].dia);
	//printf("Ingrese el anio de ingreso a la empresa: \n");
	//scanf("%d", &empleado.nacimientoEIngreso[1].anio);
	//printf("Ingrese el mes de ingreso a la empresa: \n");
	//scanf("%d", &empleado.nacimientoEIngreso[1].mes);
	//printf("Ingrese el dia de ingreso a la empresa: \n");
	//scanf("%d" ,&empleado.nacimientoEIngreso[1].dia);
	return empleado;
};
void cargarEmpleados(struct Empleado empleados[], int cantidad){
	for (int i=0;i<cantidad;i++){
		empleados[i]=cargarEmpleado();
	}
}
void mostrarEmpleado(struct Empleado empleado){
	printf("\nDatos del empleado\n");
	printf("Nombre: %s\n",empleado.nombre);
	//printf("Apellido: %s\n",empleado.apellido);
	//printf("DNI: %s\n", empleado.dni);
	//printf("CUIT: %s\n",empleado.cuit);
	printf("Sueldo: %.2f\n",empleado.sueldo);
	//printf("Genero: %c\n",empleado.sexo);
	//printf("Anio de nacimiento: %d\n",empleado.nacimientoEIngreso[0].anio);
	/*printf("Mes de nacimiento: %d\n",empleado.nacimientoEIngreso[0].mes);
	printf("Dia de nacimiento: %d\n",empleado.nacimientoEIngreso[0].dia);
	printf("Anio de ingreso a la empresa: %d\n",empleado.nacimientoEIngreso[1].anio);
	printf("Mes de ingreso a la empresa: %d\n",empleado.nacimientoEIngreso[1].mes);
	printf("Dia de ingreso a la empresa: %d\n",empleado.nacimientoEIngreso[1].dia);*/
	printf("\n-----------------------------------------------------\n");
	}
void mostrarEmpleados(struct Empleado empleados[], int cantidad){
	for (int i=0;i<cantidad;i++){
		mostrarEmpleado(empleados[i]);
	}
}
void ordenarEmpleadosSueldo(struct Empleado empleados[], int cantidad){

	struct Empleado aux;
	for (int i = 0; i<cantidad; i++){
	for (int j = 0; j<cantidad-1; j++){
	if(empleados[j].sueldo<empleados[j+1].sueldo){
	aux = empleados[j];
	empleados[j]=empleados[j+1];
	empleados[j+1]=aux;
			}
		}
	}
}
//No funciona si hay más de dos nombres
void ordenarEmpleadosNombre(struct Empleado empleados[], int cantidad){
	struct Empleado aux;
	for (int i=0;i<cantidad;i++){
		for (int j=1;j<cantidad-1;j++){
		if (strcmp(empleados[j].nombre ,empleados[j+1].nombre) == 1 ){
			    aux = empleados[j];
                empleados[j]=empleados[j+1];
                empleados[j+1]=aux;
			}
		}
	}
}
