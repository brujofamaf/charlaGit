/* Analisis Numerico
	Alumno: Leandro E. Ramos
	Practico: 1
	Ejercicio 5
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

float potency(float x, int n);

int main (void){
	float x= 0.0;
	int i=0;

	printf("-------------- PRACTICO 1 -----------------\n");
	printf("Ejercicio5\n");
	printf("Ingrese un numero: ");
	scanf("%f", &x);
	for(i=1; i<6; i++){
		printf("%f ^ %i = %f\n",x,i, potency(x,i) );
	}
	return 0;
}

float potency(float x, int n){
	if(n == 0){
		return 1;
	}
	else{
		return x * potency(x, n-1);
	}
}