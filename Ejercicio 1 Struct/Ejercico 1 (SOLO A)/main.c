#include <stdio.h>
#include <stdlib.h>
#include <string.h>
/* A- Crear 5 vehículos, donde cada vehículo posee patente, año, color y precio.
int validar_patente(char p[]){

    int devolucion = -1;
    int largo = strlen(p);

    if (largo == 6){
        if ((!isdigit(p[0])) || (!isdigit(p[1])) || (!isdigit(p[2])) || (isdigit(p[3])) || (isdigit(p[4])) || (isdigit(p[5]))){

        printf("\nERROR: La patente ingresada es incorrecta\n\n");

        devolucion = 0;
       }
    } else if (largo == 7){
        if ((isdigit(p[0])) || (isdigit(p[1])) || (!isdigit(p[2])) || (!isdigit(p[3])) || (!isdigit(p[4])) || (isdigit(p[5])) || (isdigit(p[6]))){

        printf("\nERROR: La patente ingresada es incorrecta\n\n");

        devolucion = 0;
       }
    } else printf("ERROR: La patente ingresada es incorrecta");

    return devolucion;
}
void ordenar_patentes(struct Vehiculo v[T]){

    struct Vehiculo aux;
    int tamanio = 0;

    for (int i = 0; i < T; i++){
        for (int n = 0; n < T - 1; n++){
                tamanio = strlen(v[i].patente);
                printf("\n\n---[%d]----\n\n", tamanio);
                if(tamanio == 6){
                    if (atoi(v[n].patente) > atoi(v[n + 1].patente)){
                        aux = v[n];
                        v[n] = v[n + 1];
                        v[n + 1] = aux;
                    }
            }else if (strcmp(v[n].patente, v[n + 1].patente) > 0){
                aux = v[n];
                v[n] = v[n + 1];
                v[n + 1] = aux;
            }
        }
    }

} */
struct Coche{
	int anio, precio;
	char patente[20];
	char color[20];
};
struct Coche cargarCoche();
void mostrarCoche(struct Coche c);
void cargarCoches(struct Coche v[], int t);
void mostrarCoches(struct Coche v[], int t);
int validacionPatente();
int main(int argc, char *argv[]) {
	printf ("----Ejercicio A----\n");
	int tam=2;
	struct Coche arrayCoches[tam];
	 cargarCoches(arrayCoches,tam);
	 mostrarCoches(arrayCoches,tam);
	 printf ("%d", validacionPatente());
	return 0;
}
struct Coche cargarCoche(){
	struct Coche c;
		char aux[20]= " ";
		printf ("\nIngrese el color:\n");
		fflush(stdin);
		gets(aux);
		strcpy(c.color,aux);
		char aux2[20]=" ";
		printf ("Ingrese la patente:\n");
		gets(aux2);
		strcpy(c.patente, aux2);
		while (strlen(c.patente)!=6&&strlen(c.patente)!=7||validacionPatente()!=1){
			printf ("\nPatente invalida. Ingresela nuevamente\n");
			gets(aux2);
			strcpy(c.patente, aux2);
			strlen(c.patente);
		}
		printf ("Ingrese el anio:\n");
		scanf ("%d", &c.anio);
		printf ("Ingrese el precio:\n");
		scanf ("%d", &c.precio);
		return c;
}
void cargarCoches(struct Coche v[], int t){
	for (int i=0;i<t;i++){
		v[i]=cargarCoche();
	}
}
void mostrarCoche(struct Coche c){
		printf ("\n El coche %s", c.color);
		printf (" tiene patente %s", c.patente);
		printf (" es del anio %d", c.anio);
		printf (" y vale %d\n", c.precio);
}

void mostrarCoches(struct Coche v[], int t){
     for ( int i = 0; i<t; i++){
        mostrarCoche(v[i]);
    }
}
int validacionPatente(){
	struct Coche c;
	int validacion=0;
	char dic[26]="abcdefghijklmnopqrstuvwxyz";
	int numeros[10];
	for (int i=0;i<9;i++){
		numeros[i]=i;
	}
	int tam=strlen(c.patente);
	int tampat[tam];
	if (tam=6){
		for (int i=0;i<26;i++){
			for (int j=0;j<3;j++){
				if (tampat[i]==dic[j]){
					validacion=1;
				}
				else{
					validacion=0;
				}
			}
		}
	}
	if (tam=7){
		for (int i=0;i<26;i++){
			for (int j=0;j<6;j++){
				if (tampat[0]||tampat[1]||tampat[4]||tampat[5]==dic[j]){
					validacion=1;
				}
				else validacion=0;
			}
		}
	}
	return validacion;
}
