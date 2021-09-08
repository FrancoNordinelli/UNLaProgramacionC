#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
    printf("Por favor escribe la oracion y verificare si es un palindromo:\n");
    char oracion1[50]="";
    fflush(stdin);
    gets(oracion1);
    char letras[52]="abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int longitud=0;
    int i,j;
    for (i=0;i<50;i++){
        for (j=0;j<52;j++){
                if (oracion1[i]==letras[j]){
                    longitud=longitud+1;
                }
        }
    }
    printf("Longitud de la oracion: %d\n",longitud);

    char oracion2[longitud];
    int l=-1;
    int k;
    for (k=0;k<50;k++){
        for (j=0;j<52;j++){
            if (oracion1[k]==letras[j]){
                l=l+1;
                oracion2[l]=oracion1[k];
                }
            }
    }

    printf("ORACION SIN ESPACIOS:\n");
    for (i=0;i<longitud;i++){
            printf("%c",oracion2[i]);
    }
    int palindromo=0;
    for (i=0;i<longitud;i++){
        if (oracion2[i]==oracion2[longitud-1-i]){
            palindromo=1;
        }
        else{
            palindromo=0;
        }
    }
    if (palindromo==1){
        printf("\nLA ORACION INGRESADA ES UN PALINDROMO\n");
    }else{
        printf("\nLA ORACION INGRESADA NO ES UN PALINDROMO\n");
    }

    return 0;
}
