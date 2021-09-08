
#ifndef CARTONES_H_INCLUDED
#define CARTONES_H_INCLUDED
#define COLUMNA 5
#define REN 3

struct CartonE;

typedef struct CartonE * Carton;
typedef struct JugadorE * Jugador;
typedef struct ComputadoraE * Computadora;

//-------------funciones------------//
//PRE:-----
//POST:DEVUELVE LA CANTIDAD DE CARTONES ESCOGIDA POR EL USUARIO
int elegirCarton();
//PRE: MINI y MAXI DEBEN ESTAR DECLARADOS (MINI=1;MAXI=90)
//POST: GENERA UN N�MERO ALEATORIO ENTRE 1 Y 90
int aleatorioEntre(int mini, int maxi);
//PRE:MINI, MAXI Y ELECCION DEBEN ESTAR DECLARADOS. ELECCI�N ES LA CANTIDAD DE CARTONES QUE ELIGI� EL USUARIO,ENTRE 1 Y 3. 
//CARTON ES UN TIPO DE DATO STRUCT Y UN PUNTERO.
//POST:SE CARGA EL CARTON CON N�MEROS ALEATORIOS ENTRE 1 Y 90.
Carton cargarCarton(int eleccion,int mini ,int maxi);
//PRE:CARTON ES LA CANTIDAD DE CARTONES ESOCGIDAS POR EL USUARIO. BUSCAR, EL N�MERO REPETIDO. 
//POST:DEVUELVE LA POSICI�N DE LOS N�MEROS QUE ENCUENTRE COMO 0. SI NO LO ENCUENTRA, COMO 1.
int busquedaSecuencialTridimecional (Carton m ,int carton, int buscar);
//PRE: MINI Y MAXI DEBEN ESTAR DECLARADOS. ELECCION ES LA CANTIDAD DE CARTONES ESCOGIDA
//POST:SE CARGA LA CANTIDAD DE CARTONES ESCOGIDAS POR EL USUARIO, DE FORMA MANUAL
Carton cargarMatrisPersonalizada(int eleccion,int mini,int maxi);
//PRE:LOS PAR�MTROS YA ESTAN DECLARADOS.
//POST: PASA A 0 CADA ELEMENTO DE LA MATRIZ(MINI-1)
void limpiarMatrizTridimencional(Carton m,int eleccion,int mini,int maxi);
//PRE:CARTON ES UN PUNTERO QUE APUNTA A LA ESTRUCTURA CARTON
//POST:RETORNA LOS N�MEROS DEL CART�N PARA SER USADOS EN OTRAS FUNCIONES
Carton getCarton(Carton j);
//PRE:ELECCION FUE ESTABLECIDA.CARTON DECLARADO
//POST:MUESTRA LOS N�MEROS ALMACENADOS EN LOS CARTONES
void mostrarCarton (Carton m,int eleccion);
//PRE:MINI Y MAXI ES 1 Y 90 RESPECTIVAMENTE. ELECCI�N, LA CANTIDAD DE CARTONES ESOGIDA
//POST:EL USUARIO ESCOGE ENTRE CARTONES DE N�MEROS ALEATORIOS O PERSONALIZADOS 
//Y SE CARGAN LOS N�MEROS SEG�N LO QUE ESCOJA POR FUNCIONES cartonPersonalzado o cargarCarton
Carton elegirTipoCarton (int eleccion,int mini,int maxi);
//PRE: LOS DATOS DEL JUGADOR DEBEN ESTAR CARGADOS. TAMBI�N LOS PUNTEROS Jugador y Computadora. LA CANTIDAD DE CARTONES TAMBI�N(ELECCI�N)
//POST: FUNCI�N PRINCIPAL. A TRAV�S DE UN MEN� SE ACCEDE A DIFERENTE INSTANCIAS DEL JUEGO, HECHAS POR OTRAS FUNCIONES.
void comenzarPartida( Jugador ju, Computadora Pc ,int eleccion);

void pasarACeroMatriz(int m[][REN][COLUMNA],int carton,int bolillero[], int b);
void copiarMatriz( Carton c, int auxMatriz[][REN][COLUMNA],int eleccion);
Carton cargarBolillero( int tam, int mini,int maxi);
int busquedaSecuencial(Carton b, int tam, int buscar);
void mostrarBolillero(int bolilla[],int b);
int getBolillero(Carton j,int t);
void setBolillero(Carton b,int i,int num);
void guardarPuntajes (Jugador ju,Computadora pc);


void sacarBolilla(int v[], int tam, int mini,int maxi);
int busquedaSecuencialAux(int v[], int tam, int buscar);

#endif // CARTONES_H_INCLUDED
