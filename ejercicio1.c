/* Analisis Numerico
	Alumno: Leandro E. Ramos
	Practico: 1
	Ejercicio 1
*/

#include <stdio.h>
#include <stdlib.h>

double a1(void);
double a2(void);
double a3(void);
double a4(void);
double a5(void);
double a6(void);
double a7(void);
double a8(void);
double a9(void);



int main (void){
	printf("-------------- PRACTICO 1 -----------------\n");
	printf("Ejercicio1\n");
	
	printf(" 5 / 2 + 20 MODULO 6 = %f\n", a1());
	printf(" 4 * 6 / 2 - 15 / 2 = %f\n", a2());
	printf(" 5 * 15 / 2 / (4 - 2) = %f\n", a3());
	printf(" 4 * 6 / 2 / 5 - 2 = %f\n", a4());
	printf(" 4 * 6 / 2 / (5 - 2) = %f\n", a5());
	printf(" 8 == 8 OR 7 NOTEQ 4 AND 4 <1 = %f\n", a6());
	printf(" (8 == 8 OR 7 NOTEQ 4) AND 4 <1 = %f\n", a7());
	printf(" 4 * 3 <6 AND 4 >5 - 2 OR 3 + 2 <12 = %f\n", a8());
	printf(" 4 * 3 <6 AND (4 >5 - 2 OR 3 + 2 <12) = %f\n", a9());

	return 0;
}

double a1(void){
	return 5.0 / 2.0 + 20 % 6;
}

double a2(void){
	return 4.0 * 6.0 / 2.0 - 15.0 / 2.0;
}

double a3(void){
	return 5.0 * 15.0 / 2.0 / (4.0 - 2.0);
}

double a4(void){
	return 4.0 * 6.0 / 2.0 / 5.0 - 2.0;
}

double a5(void){
	return 4.0 * 6.0 / 2.0 / (5.0 - 2.0);
}

double a6(void){
	return 8 == 8 || 7 != 4 && 4 <1;
}

double a7(void){
	return (8 == 8 || 7 != 4) && 4 <1;
}

double a8(void){
	return 4 * 3 <6 && 4 >5 - 2 || 3 + 2 <12;
}

double a9(void){
	return 4 * 3 <6 && (4 >5 - 2 || 3 + 2 <12);
}
