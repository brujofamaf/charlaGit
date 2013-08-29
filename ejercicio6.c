/* Analisis Numerico
	Alumno: Leandro E. Ramos
	Practico: 1
	Ejercicio 6
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

float sum_float(void);
double sum_double(void);

int main (void){
	float n =0.0;
	double m=0.0;
	printf("-------------- PRACTICO 1 -----------------\n");
	printf("Ejercicio 6\n");
	n = sum_float();
	printf("La serie se estaciona luego de %f terminos con float\n", n);
	m = sum_double();
	printf("La serie se estaciona luego de %f terminos con double\n", m);

	return 0;
}

float sum_float(void){
	float n=1.0;
	float ac=1.0;
	float k=0.0;
	while (ac != k){
		ac = k;
		k += 1.0 / pow(n, 2.0);
		n++;
	}
	return n;
}

double sum_double(void){
	double n=1.0;
	double ac=1.0;
	double k=0.0;
	while (ac != k){
		ac = k;
		k += 1.0 / pow(n, 2.0);
		n++;
	}
	return n;

}
