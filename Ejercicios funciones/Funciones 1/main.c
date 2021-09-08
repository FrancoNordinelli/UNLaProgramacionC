#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* Crear las siguientes funciones y procedimientos, probándolos desde el main.
Int cantidadNumerosRepetidosEnElVector();
*/
int calcularEdad(int nacimiento, int anioHoy);
float calcularIndiceDeMasaCorporal(float altura, float peso);
void dibujarTriangulo(int base, int largo);
void calcularHipotenusa(float cateto1, float cateto2);
int cantidadDeVecesQueApareceLaLetra(char letra, char oracion[100]);
int pedirEnteroPorTeclado();
float pedirFloatPorTeclado();
void cargarVector(int v[], int t);
void mostrarVector(int v[], int t);
int maximoVector();
int minimoVector();
int cantidadNumerosRepetidosEnElVector(int vector[], int tamanio);
int main(int argc, char *argv[]){
	int nacimiento, anioHoy, base, largo;
	float peso, altura, cateto1, cateto2;
	char letra; 
	char oracion[100];
	printf ("Tiene %d anios", calcularEdad(nacimiento, anioHoy));
	printf ("Su indice de masa corporal es de %.2f\n", calcularIndiceDeMasaCorporal(peso, altura));
	dibujarTriangulo(base,largo);
	calcularHipotenusa(cateto1, cateto2);
	printf ("La oracion tiene %d veces la letra seleccionada", cantidadDeVecesQueApareceLaLetra(letra,oracion));
	printf ("El numero seleccionado es %d", pedirEnteroPorTeclado());
	printf ("El numero seleccionado es %.2f", pedirFloatPorTeclado());
	int tamanio=5;
	int vector[tamanio];
	cargarVector(vector, tamanio);
	mostrarVector(vector, tamanio);
	printf ("\nel valor minimo es %d\n", valorMinimo(vector, tamanio));
	printf ("El valor maximo es %d\n", valorMaximo(vector, tamanio));
	printf ("La cantidad de numeros repetidos en el vector es %d", cantidadNumerosRepetidosEnElVector(vector, tamanio));
	return 0;
}
int calcularEdad(int nacimiento, int anioHoy){
	printf ("Ingrese el anio de nacimiento:");
    scanf ("%d", &nacimiento);
    printf ("Ingrese anio actual:");
    scanf("%d", &anioHoy);
    int edad=anioHoy-nacimiento;
    return edad;
}
float calcularIndiceDeMasaCorporal(float altura, float peso){
	printf ("\nIngrese su peso:");
	scanf ("%f", &peso);
	printf ("\nAhora su altura, en metros:\n");
	scanf ("%f", &altura);
	int IMC=peso/(altura*altura);
	return IMC;
}
void dibujarTriangulo(int base, int largo){
	printf ("\nIngrese la base:");
	scanf ("%d", &base);
	printf ("Ingrese la altura");
	scanf ("%d", &largo);
	int i, j;
	for (i=0;i<largo;i++){
	for (j=0;j<base+i;j++){
		printf ("x");
		}
		printf("\n");
    }
}
void calcularHipotenusa(float cateto1, float cateto2){
	printf ("Dame un cateto:\n");
	scanf("%f", &cateto1);
	printf("Dame otro cateto:\n");
	scanf("%f", &cateto2);
	float hipotenusa=sqrt((cateto1*cateto1)+(cateto2*cateto2));
	printf ("La hipotenusa es: %.2f", hipotenusa);
}
int cantidadDeVecesQueApareceLaLetra(char letra, char oracion[100]){
	printf ("\nEscriba una oracion:");
	fflush(stdin);
	gets(oracion);
	printf ("\n Que letra vamos a contar?:");
	scanf ("%c", &letra);
	int i, cont = 0;
	for (i=0;i<100;i++){
		if (oracion[i]==letra){
			cont++;
		}
	}
	return cont;
}
int pedirEnteroPorTeclado(){
	int n1;
	printf ("\nIngrese un numero entero:");
	scanf ("%d", &n1);
	return n1;
}
float pedirFloatPorTeclado(){
	float n2;
	printf ("\nIngrese un numero con coma:");
	scanf ("%f", &n2);
	return n2;
}
void cargarVector(int v[], int t){
	int i;
	for (i=0;i<t;i++){
		printf ("\nDame un numero de v:");
		scanf ("%d", &v[i]);
	}
}
void mostrarVector(int v[], int t){
	int i;
	for (i=0;i<t;i++){
		printf ("---  %d  ---", v[i]);
		
	}
}
int valorMinimo(int vector[], int tamanio){
    	int i;
    	int min=vector[0];
    	for (i=0;i<tamanio;i++){
    		if (min>vector[i]){
    			min=vector[i];
			}
		}
		return min;
	}
	int valorMaximo(int vector[], int tamanio){
		int i;
		int max=vector[0];
		for (i=0;i<tamanio;i++){
			if (max<vector[i]){
				max=vector[i];
			}
		}
		return max;
	}
	int cantidadNumerosRepetidosEnElVector(int vector[], int tamanio){
		int i;
		int cont=0;
		for (i=0;i<tamanio;i++){
			if (vector[i]==vector[i]){
				cont++;
			}
		}
		return cont;
	}



