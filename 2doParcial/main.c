#include <stdio.h>
#include <stdlib.h>
#include <string.h>
//CREACION DE LA STRUCT CON SUS DATOS
struct Teatro{
	char nombre[20];
	char direccion[20];
	int id;
	int capacidad;
};
//PRE:LA STRUCT DEBE HABER SIDO CREADA. EL ARRAY, DECLARADO EN EL MAIN
//POST:SE INICIALIZA EL ARRAY TEATROS CON VALOR -20 EN SUS VARIABLES
void iniciarLosTeatros(struct Teatro teatros[], int n);
//PRE:EL ARRAY TIENE QUE HABERSE INICIALIZADO
//POST:DEVUELVE LA POSICION DE LA BUSQUEDA:-4, SI LA POSICIÓN NO FUE UTILIZADA(SI NO TIENE -20 EN CAPACIDAD)
int buscarPosicionDispoble(struct Teatro teatros[], int n);
//PRE:PREVIA BUSQUEDA DE POSICIÓN VACÍA POR MEDIODE DE FUNCIÓN buscarPosicionDisponible
//POST:SE CARGA ESA POSICIÓN CON LOS DATOS DE LA STRUCT
void agregarTeatro(struct Teatro teatros[], int n, int id, char nombre[20], char direccion[20], int capacidad);
//PRE:LA STRUCT DEBE HABER SIDO DECLARADA
//POST:MUESTRA LOS DATOS DE LA STRUCT
void mostrarTeatro(struct Teatro t);
//PRE:PREVIA CARGA DE LAS POSICIONES DEL ARRAY.STRUCT DECLARADA Y PROCEDIMIENTO mostrarTeatro
//POST:MUESTRA LOS DATOS CARGADOS EN EL ARRAY DE STRUCT, (SIEMPRE Y CUANDO NO CONTENGAN UN -20 EN EL VALOR DE CAPACIDAD) 
void mostrarTeatros(struct Teatro teatros[], int n);
//PRE:BUSQUEDA DEL id DECLARADO POR PARÁMETRO EN FUNCIÓN busquedaTeatro
//POST:ELIMINA EL TEATRO (CARGA CON -20 EL VALOR DE CAPACIDAD, POR LO QUE YA NO SE MOSTRARÁ POR ARCHIVO NI POR CONSOLA)
void eliminarTeatro(struct Teatro teatros[], int n, int id);
//PRE: EL idBuscado SE PASÓ POR PARÁMETRO EN VOID eliminarTeatro
//POST: DEVUELVE LA POSICIÓN DEL ARRAY DONDE ESTA LA STRUCT GUARDADA CON DICHO id
int  busquedaTeatro(struct Teatro t[], int cant, int idBuscado);
//PRE:ARCHIVO TXT CREADO MANUALMENTE (EL DEV C++ PARECE NO PODER CREAR ARCHIVOS DESDE SÍ)
//POST: GUARDA LOS DATOS DE LAS STRUCT CREADOS 
void guardarTeatros(struct Teatro t[], int cant);

int main(int argc, char *argv[]) {
	
	 printf("Examen_37995141_NORDINELLI_FRANCO\n\n");
	 
 	int cantidad = 10;
 	struct Teatro teatros[cantidad];
 	struct Teatro t;
	 iniciarLosTeatros(teatros, cantidad);//-1 y vacíos en las variables
	 
 //Agrego 4 teatros
 	agregarTeatro(teatros,cantidad,  1111, "Colon", "Tucuman 1171", 9500);
 	agregarTeatro(teatros,cantidad, 2222, "Gran Rex", "Av. Corrientes 857", 4500);
 	agregarTeatro(teatros,cantidad, 3333, "Luna Park ","Av. Madero 420", 7000);
 	agregarTeatro(teatros,cantidad, 4444, "Astros","Av. Corrientes 750", 3000);
 //Muestro los teatros
 	printf("\n-------LUEGO DE AGREGAR----------\n");
 	mostrarTeatros(teatros, cantidad);
 //Elimino un teatro
 	eliminarTeatro(teatros, cantidad, 2222);
 //Vuelvo a mostrar los teatros, no debe estar el teatro eliminado
 	printf("\n-------LUEGO DE ELIMINAR----------\n");
 	mostrarTeatros(teatros, cantidad);
 //Agrego un nuevo teatro y vuelvo a mostrar
 	agregarTeatro(teatros,cantidad, 5555, "Espacio Abierto","Carabelas 255", 13000);
 	printf("\n-------LUEGO DE AGREGAR OTRO----------\n");
 	mostrarTeatros(teatros, cantidad);
 //Guarda los teatros en un archivo teatros.txt
 	guardarTeatros(teatros, cantidad);
 	return 0;
}

void iniciarLosTeatros(struct Teatro teatros[], int n){
	 for ( int i = 0; i<n; i++){
        teatros[i].capacidad = -20;
       
    }
}

int buscarPosicion(struct Teatro teatros[], int n){
	int pos=-4;
	int i = 0;
	while(pos==-4&&i<n){
		if(teatros[i].capacidad==-20){
			pos=i;
		}
		i++;
	}
	return pos;
}

void agregarTeatro(struct Teatro teatros[], int n, int id, char nombre[20], char direccion[20], int capacidad){
		int i = buscarPosicion(teatros,n);
	if (i!=-4){
		teatros[i].id=id;
		strcpy(teatros[i].nombre,nombre);
		strcpy(teatros[i].direccion,direccion);
		teatros[i].capacidad=capacidad;
	}else{
		printf ("\nYa no hay espacio. Elimine un Teatro\n");
	}
}

void mostrarTeatro(struct Teatro t){
	    printf("\n-----------------------------------------\n");
    printf("Codigo Identificador: %d -- Nombre: %s -- Direccion: %s -- Capacidad %d\n",
           t.id, t.nombre, t.direccion, t.capacidad);
}

void mostrarTeatros(struct Teatro teatros[], int n){
	for (int i=0;i<n;i++){
		if(teatros[i].capacidad!=-20){
			mostrarTeatro(teatros[i]);
		}
	}
}

void eliminarTeatro(struct Teatro teatros[], int n, int idBuscado){
	
	int i=busquedaTeatro(teatros,n,idBuscado);
	if(i!=-1){
		teatros[i].capacidad = -20;
	}
}

int busquedaTeatro(struct Teatro t[], int cant, int idBuscado){
    int resultado = -1;
    for ( int i = 0; i<cant; i++){
        if ( t[i].id == idBuscado){
            resultado = i;
        }
    }
    return resultado;
}

void guardarTeatros(struct Teatro t[], int n){
    FILE * puntero = fopen("teatros.txt", "w");
    for ( int i = 0; i<n; i++){
        if(t[i].capacidad!=-20){
            fprintf(puntero, " NOMBRE: %s; CAPACIDAD: %d; CODIGO IDENTIFICADOR:%d; DIRECCION: %s\n", t[i].nombre, t[i].capacidad, t[i].id, t[i].direccion);
        }
    }
    fclose(puntero);
}
