/* Analisis Numerico
	Alumno: Leandro E. Ramos
	Practico: 1
	Ejercicio 4
*/

#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <math.h>

float calculate_discriminant(float a, float b,float c);

int main (void){
	float a= 0.0;
        float b= 0.0;
        float c= 0.0;
        float discriminant =0.0;
        float x=0.0;
        float x1=0.0;
        float x2=0.0;
        float y = 0.0;

	printf("-------------- PRACTICO 1 -----------------\n");
	printf("Ejercicio4\n");
	printf("Ingrese el coeficiente a: ");
	scanf("%f", &a);
        printf("Ingrese el coeficiente b: ");
        scanf("%f", &b);
        printf("Ingrese el coeficiente c: ");
        scanf("%f", &c);
        discriminant = calculate_discriminant(a,b,c);
        printf("Las soluciones a la ecuacion %f * (x**2) + %f * x + %f son: \n", a,b,c);
        if( discriminant < 0){
                y = (sqrt((-discriminant))) / (2.0 * a);
                if( b != 0){
                        x = (-b) / (2.0 * a);
                }
                printf("1) %f + i * %f\n", x, y);
                printf("2) %f - i * %f\n", x, y);
        }
        else{
                y = (sqrt(discriminant)) / (2.0 * a);
                if( b != 0){
                        x = (-b) / (2.0 * a);
                }
                x1 = x + y;
                x2 = x - y;
                printf("1) %f + i * 0\n", x1);
                printf("2) %f - i * 0\n", x2);
        }
	return 0;
}

float calculate_discriminant(float a, float b,float c){
         return (pow(b, 2.0) - (4.0 * a * c));
}
 