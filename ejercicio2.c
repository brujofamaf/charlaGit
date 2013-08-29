/* Analisis Numerico
	Alumno: Leandro E. Ramos
	Practico: 1
	Ejercicio 2
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

float max(float x, float y);

int main (void){
	float x=0.0;
	float y=0.0;
	float res=0.0;

	printf("-------------- PRACTICO 1 -----------------\n");
	printf("Ejercicio2\n");
	printf("Ingrese un numero: ");
	scanf("%f", &x);
	printf("Ingrese otro numero: ");
	scanf("%f", &y);
	printf("\n");
	if(x==y){
		printf("Los numero ingresados son iguales!");
	}
	else{
		res = max(x,y);
		printf ("El mayor es: %f", res);
	}
	printf("\n");
	return 0;
}

float max(float x, float y){
	float res=0.0;

	if(x > y){
		res = x;
	}
	else{
		res = y;
	}
	return res;
}
