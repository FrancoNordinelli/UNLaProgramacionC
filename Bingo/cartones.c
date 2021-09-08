#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>
#include "Jugadores.h"
#include "cartones.h"
#define COLUMNA 5
#define REN 3
#define RENGLON "\n------------------------------------------------\n"

enum opciones {salir,mostrar,mostrarPc,moverBolilla,resultados};

struct CartonE{

int matriz[3][REN][COLUMNA];

};

int elegirCarton(){
int cartones;
	do{
	printf("Elija con cuantos cartones quiere jugar 1 2 o 3\n");
	scanf("%d",&cartones);

	if(cartones<1 || cartones>3){
    printf("\nSOLO PUEDE JUGAR CON 1 2 O 3 CARTONES!!\n\n\n");
		}
	}
	while(cartones<1 || cartones>3);
	printf(RENGLON);

	return cartones;

}

Carton cargarCarton(int eleccion,int mini ,int maxi){

    Carton c=malloc(sizeof(struct CartonE));

   int aux=0;
   int auxMatriz=0;

  for(int i=0;i<eleccion;i++){

    for(int j=0;j<REN;j++){

     for(int k=0;k<COLUMNA;k++){

         do{
           aux = aleatorioEntre(mini,maxi);
            auxMatriz = busquedaSecuencialTridimecional(c->matriz,eleccion,aux);
            }while(auxMatriz!=0);
             c->matriz[i][j][k]= aux;

        }
        }
       }

return c;
}

int aleatorioEntre(int mini, int maxi){
        int resultado = 0;
        resultado  =  mini + rand()%(maxi - mini +1);
        return resultado;
}

int busquedaSecuencialTridimecional (Carton m ,int carton, int buscar){
    int i=0;
    int j=0;
    int k=0;
    int encontrado=0;

for(i=0;i<carton;i++){
    for(j=0;j<REN;j++){
       for(k=0;k<COLUMNA;k++){
     if(m->matriz[i][j][k]== buscar){
        encontrado=1;
     }
     }
     }
     }

   return encontrado;
}

void mostrarCarton (Carton m,int eleccion){

for(int i=0;i<eleccion;i++){
     printf("\n CARTON %d \n",i+1);
    for(int j=0;j<REN;j++){
     for(int k=0;k<COLUMNA;k++){
          printf(" %d ",m->matriz[i][j][k]);

        }
printf("\n");
      }

   }


}

Carton cargarMatrisPersonalizada(int eleccion,int mini,int maxi){

    Carton c=malloc(sizeof(struct CartonE));

limpiarMatrizTridimencional(c->matriz,eleccion,mini,maxi);
   int numeroPers=0;
   int i=0;
   int j=0;
   int k=0;
   int auxNumero=0;
   int resultBusqueda=0;

   for(i=0;i<eleccion;i++){
    for(j=0;j<REN;j++){
       for(k=0;k<COLUMNA;k++){
     do{
       do{
      printf("ingrese su numero en el CARTON %d  posicion RENGLON : %d , posicion FILA : %d === ",i+1,j+1,k+1);
      scanf("%d",&numeroPers);
      if(numeroPers<mini||numeroPers>maxi){
        printf("\nel numero no esta dentro del rango del juego ,ingreselo nuevamente\n");
       }
      }while(numeroPers<mini||numeroPers>maxi);

      auxNumero=numeroPers;
      resultBusqueda=busquedaSecuencialTridimecional(c->matriz,eleccion,auxNumero);
       if(resultBusqueda==1){
            printf("\nel numero ya fue ingresado , ingreselo nuevamente \n");
       }
     }while(resultBusqueda!=0);
     c->matriz[i][j][k]=auxNumero;
       }
      }
     }
   return c; }

void limpiarMatrizTridimencional(Carton m,int eleccion,int mini,int maxi){

for(int i=0;i<eleccion;i++){

    for(int j=0;j<REN;j++){

        for(int k=0;k<COLUMNA;k++){
            m->matriz[i][j][k]= mini-1;
}
}
}
}

Carton elegirTipoCarton (int eleccion,int mini,int maxi){

Carton c=malloc(sizeof(struct CartonE));

    int tipoCarton;
    do{
    printf("\nELEGIR TIPO DE CARTON\n\n");
    printf(".1 Para elejir carton aleatorio\n.2 Para elegir carton personalizado\n");
    scanf("%d",&tipoCarton);
    if(tipoCarton>2||tipoCarton<1){
    printf("\nOPCION INCORRECTA ,ingrese nuevamente");
}
    }while(tipoCarton>2||tipoCarton<1);

   switch(tipoCarton){
   case 1:c =cargarCarton(eleccion,mini,maxi);break;
   case 2:c =cargarMatrisPersonalizada(eleccion,mini,maxi);break;
    }

   printf(RENGLON);

return c;}




void comenzarPartida(Jugador ju, Computadora Pc,int eleccion){

Carton m;
Carton p;

int bolillero[90];
sacarBolilla(bolillero,90,1,90);
m=elegirTipoCarton(eleccion,1,90);
p=cargarCarton(eleccion,1,90);


int columna=0;
int bingo=0;
int linea=0;
int auxColumna=0;
int auxBingo=0;
int auxLinea=0;
int contadorLinea=0;
int contadorBingo=0;
int contadorColumna=0;


int auxMatrizPc[eleccion][REN][COLUMNA];
float auxPuntaje=0;
float auxPuntajePc=0;
int auxMatriz[eleccion][REN][COLUMNA];

//copiamos las dos matrizes en auxiliares

copiarMatriz(m,auxMatriz,eleccion);
copiarMatriz(p,auxMatrizPc,eleccion);

int opcion;
int b=0;
system("cls");


 do{

   printf("\n\n     OPCIONES DE PARTIDA");
   printf("\nElija una opcion...\n");
   printf("\n1) Para ver sus cartones.");
   printf("\n2) Para ver cartones del rival.");
   printf("\n3) Para generar bolilla.");
   printf("\n4) Para mostrar resultados.");
   printf("\n0) Para abandonar partida.\n");

   scanf("%d",&opcion);
   system("cls");


switch(opcion){
case mostrar :printf("\nCartones de %s\n",getNombreYapellido(ju));mostrarCarton(m,eleccion);break;//mostramos el carton del usuario
case mostrarPc :printf("\nCartones Rival\n");mostrarCarton(p,eleccion);break;//mostramos el carton de la pc

case moverBolilla :if(opcion==3&&b<90){//este case hace mover el juego van a ir saliendo las bolillas de a 1 a medida que el usuario presione 3
        printf(RENGLON);
        printf("BOLILLA NRO %d ES = %d",b+1,bolillero[b]);
        printf("\n(Los numeros encontrados se iran marcando con 0)");
        printf(RENGLON);
        //los numeros que se coinsidan en el boliilero se marcaran en el carton con 0 en una matriz auxiliar para cada jugador.
        pasarACeroMatriz(auxMatriz,eleccion,bolillero,b);
        pasarACeroMatriz(auxMatrizPc,eleccion,bolillero,b);
//Buscamos columna, linea o bingo en los cartones del usuario
        columna= buscarColumna(auxMatriz,eleccion);
        bingo=buscarBingo(auxMatriz,eleccion);
        linea=buscarLinea(auxMatriz,eleccion);
//Buscamos columna, linea o bingo en los cartones de la pc
        auxColumna=buscarColumna(auxMatrizPc,eleccion);
        auxBingo=buscarBingo(auxMatrizPc,eleccion);
        auxLinea=buscarLinea(auxMatrizPc,eleccion);

        printf("\nCarton de %s\n",getNombreYapellido(ju));
        mostrarCarton(auxMatriz,eleccion);//mostramos la matriz auxiliar del usuario
        printf(RENGLON);
        printf("\nCarton Rival.\n");
        mostrarCarton(auxMatrizPc,eleccion);//mostramos la matriz auxiliar de la pc


//COLUMNA esta condicion lo que hace es que solo se pueda cantar una sola ves.
if ((auxColumna==10||columna==10)&&contadorColumna==0){
            if(columna==10){
             printf(RENGLON);
             printf("\n\nCANTO COLUMNA!!\n %s suma 10 puntos\n\n",getNombreYapellido(ju));
             printf(RENGLON);
             auxPuntaje=auxPuntaje+10;
            contadorColumna++;
            }

            if(auxColumna==10){
                 printf(RENGLON);
                 printf("\n\nCANTO COLUMNA!!\nLa PC  suma 10 puntos\n\n");
                 printf(RENGLON);
                 auxPuntajePc=auxPuntajePc+10;
                 contadorColumna++;
            }
}
 //LINEA esta condicion lo que hace es que solo se pueda cantar una sola ves.
        if ((linea==20||auxLinea==20)&&contadorLinea==0){
            if(linea==20){
             printf(RENGLON);
             printf("\n\nCANTO LINEA!!\n %s suma 20 puntos\n\n",getNombreYapellido(ju));
             printf(RENGLON);
           auxPuntaje=auxPuntaje+20;
            contadorLinea++;
            }
            if(auxLinea==20){
                 printf(RENGLON);
                 printf("\n\nCANTO LINEA!!\nLa PC  suma 20 puntos\n\n");
                 printf(RENGLON);
                 auxPuntajePc=auxPuntajePc+20;
                contadorLinea++;
            }
    }
//BINGO esta condicion lo que hace es que solo se pueda cantar una sola ves
if ((bingo==70||auxBingo==70)&&contadorBingo==0){
            if(bingo==70){
             printf(RENGLON);
             printf("\n\nCANTO BINGO!!\n %s suma 70 puntos\n\n",getNombreYapellido(ju));
             printf(RENGLON);
             if(b<30){auxPuntaje=(auxPuntaje+70)*2;}
             if(b>30||b<50){auxPuntaje=(auxPuntaje+70)*1.7;}
             if(b>50||b<70){auxPuntaje=(auxPuntaje+70)*1.5;}
             if(b>70||b<90){auxPuntaje= auxPuntaje+70;}
             contadorBingo++;
            }
            if(auxBingo==70){
                 printf(RENGLON);
                 printf("\n\nCANTO BINGO!!\nLa PC  suma 70 puntos\n\n");
                 printf(RENGLON);
             if(b<30){auxPuntajePc=(auxPuntajePc+70)*2;}
             if(b>30&&b<50){auxPuntajePc=(auxPuntajePc+70)*1.7;}
             if(b>50&&b<70){auxPuntajePc=(auxPuntajePc+70)*1.5;}
             if(b>70&&b<90){auxPuntajePc= auxPuntajePc+70;}
            contadorBingo++;

        }
    }
             setPuntaje(ju,auxPuntaje);
             setPuntajePc(Pc,auxPuntajePc);
                   b++;

                   }else{
                   printf("\nYa no quedan mas bolillas");}break;


case resultados: mostrarPuntajes(ju,Pc);
        mostrarBolillero(bolillero,b);
        printf(RENGLON);
        printf("\nCartones de %s\n",getNombreYapellido(ju));
        mostrarCarton(m,eleccion);
        printf(RENGLON);
        printf("\nCartones Rival\n");
        mostrarCarton(p,eleccion);break;

case salir:printf("\nFIN DE LA PARTIDA");break;
default : printf(RENGLON);
          printf("OPCION INCORRECTA!!!");
          printf(RENGLON);




}
}while(opcion!=0);
}

int buscarColumna (int m[][REN][COLUMNA],int carton){//esta funcion suma los numeros en columna ,si la suma da 0 se sumara 10 puntos.

int columna=0;
int sumaColumna[5]={0,0,0,0,0};

for(int i=0;i<carton;i++){
     for(int j=0;j<REN;j++){
       for(int k=0;k<COLUMNA;k++){

     sumaColumna[k]=sumaColumna[k]+m[i][j][k];

      if(i==0&&j==2&&sumaColumna[k]==0){
        columna=10;
      }
    if(i==1&&j==0&&k==0){
     resetearVector(sumaColumna,COLUMNA);
    }
     sumaColumna[k]=sumaColumna[k]+m[i][j][k];

     if(i==1&&j==2&&sumaColumna[k]==0){
        columna=10;
      }

     if(i==2&&j==0&&k==0){

     resetearVector(sumaColumna,COLUMNA);
}
sumaColumna[k]=sumaColumna[k]+m[i][j][k];
      if(i==2&&j==2&&sumaColumna[k]==0){
        columna=10;
      }

    }
    }
}
return columna;

}
int buscarLinea(int m[][REN][COLUMNA],int carton){//esta funcion suma los numeros en columna ,si la suma da 0 se sumara 20 puntos .
int sumaRen[3]={0,0,0};
int linea=0;
for(int i=0;i<carton;i++){
     for(int j=0;j<REN;j++){
       for(int k=0;k<COLUMNA;k++){
        sumaRen[j]=sumaRen[j]+m[i][j][k];
       if(i==0&&k==4&&sumaRen[j]==0){
        linea=20;
       }
    if(i==1&&j==0&&k==0){
     resetearVector(sumaRen,REN);
    }
       sumaRen[j]=sumaRen[j]+m[i][j][k];

      if(i==1&&k==4&&sumaRen[j]==0){
        linea=20;
     }
     if(i==2&&j==0&&k==0){
     resetearVector(sumaRen,REN);

  }
    sumaRen[j]=sumaRen[j]+m[i][j][k];
    if(i==2&&k==4&&sumaRen[j]==0){

        linea=20;

        }
    }
 }
}
return linea;
}
int buscarBingo(int c[][REN][COLUMNA],int carton){//esta funcion suma los numeros en columna ,si la suma da 0 se sumara 70 puntos.
int bingo=0;
int total=0;
for(int i=0;i<carton;i++){
     for(int j=0;j<REN;j++){
       for(int k=0;k<COLUMNA;k++){

    total=total+c[i][j][k];

    if(i==0&&j==2&&k==4&&total==0){
        bingo=70;
    }

    if(i==1&&j==0&&k==0){
     total=0;
     }

    total=total+c[i][j][k];

     if(i==1&&j==2&&k==4&&total==0){

        bingo=70;

       }


    if(i==2&&j==0&&k==0){
     total=0;
}

    total=total+c[i][j][k];

     if(i==2&&j==2&&k==4&&total==0){
        bingo=70;
    }

       }
      }
     }

 return bingo;
   }
void resetearVector(int v [],int t){

for(int i=0;i<t;i++){

    v[i]=0;
}

}

void pasarACeroMatriz(int m[][REN][COLUMNA],int carton,int bolillero[], int b){

       int aux =0;
       aux = busquedaSecuencialTridimecional(m,carton,bolillero[b]);


        if (aux==1){


        for(int i=0;i<carton;i++){
            for(int j=0;j<REN;j++){
              for(int k=0;k<COLUMNA;k++){

                     if(bolillero[b]==m[i][j][k]){
                        m[i][j][k]=0;
                    }

                         }
                        }
                       }
                     }
}


void copiarMatriz( Carton c, int auxMatriz[][REN][COLUMNA],int eleccion){



for(int i=0;i<eleccion;i++){
     for(int j=0;j<REN;j++){
       for(int k=0;k<COLUMNA;k++){

    auxMatriz[i][j][k]= c->matriz[i][j][k];
       }
     }
   }

}
int busquedaSecuencialAux(int v[], int tam, int buscar){

        int pos = -1;

        for ( int i = 0; i<tam; i++){

            if ( v[i]==buscar){
                pos = i;

            }
        }

    return pos;
}
void sacarBolilla(int v[], int tam, int mini,int maxi){

     int numeroNuevo = 0;
     int resultadoBusqueda = 0 ;
    for ( int i = 0; i<tam; i++){

        do{
        numeroNuevo = aleatorioEntre(mini, maxi);
        resultadoBusqueda = busquedaSecuencialAux(v, tam, numeroNuevo);
        }while(resultadoBusqueda!=-1);

        v[i]= numeroNuevo;

    }

}

void mostrarBolillero(int bolilla[],int b){

 printf("BOLILLAS QUE YA SALIERON: \n");
         if (b>0){
        for(int i=0;i< b;i++){
            printf("%d - ",bolilla[i]);
        }
       }else{printf("--");
        };
        printf(RENGLON);
        printf("SE GENERARON %d BOLILLAS!",b);

}

//int getBolillero(Carton j,int t){ return j->bolillero[t];}
//void setBolillero(Carton b,int i,int num){b->bolillero[i]=num;}
