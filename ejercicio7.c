/* Analisis Numerico
	Alumno: Leandro E. Ramos
	Practico: 1
	Ejercicio 7
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>
#define N 1000000

float halfpi (long long int n);

int main (void){

	printf("El numero aproximado para pi es: %f\n", 2.0 * halfpi(N));

	return 0;
}

float halfpi (long long int n){
	float res=1;
	long int i=0;

	for (i=1; i<n; i++){
		res = res * ( pow(2.0*i, 2.0) / (pow(2.0*i, 2.0) -1) );
	}
	return res;
}