/* Analisis Numerico
	Alumno: Leandro E. Ramos
	Practico: 1
	Ejercicio 3
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

bool divisible(int x);

int main (void){
	int x;

	printf("-------------- PRACTICO 1 -----------------\n");
	printf("Ejercicio3\n");
	printf("Ingrese un numero: ");
	scanf("%d", &x);
	if(divisible(x)){
		printf("El numero ingresado es multiplo de 2 y de 5");
	}
	else{
		printf("El numero ingresado NO es multiplo de 2 y de 5");
	}
	printf("\n");
	return 0;
}

bool divisible(int x){
	bool res=false;

	if( (x%2 == 0) && (x%5==0)){
		res = true;
	}
	return res;
}
