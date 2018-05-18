#include<stdio.h> 
#include<math.h> 
int main() 
{ 
	//Programa para calcular una ecuación rara que no sé para qué sirve 
	float A, B, C, D, E1, E2; 
	printf("Introducir A \t"); 
	scanf("%f", &A); 
	printf("Introduce B \t"); 
	scanf("%f", &B); 
	printf("Introduzca C \t"); 
	scanf("%f", &C); 
	printf("¿Cuánto vale D? \t"); 
	scanf("%f", &D); 
	if (D!=0){ 
		E1 = pow((A - C),2)/ D; 
		E2 = pow((A - B),2)/ D; 
	       	printf("La Ecuación 1 es igual a %.4f \t", E1); 
		printf("\n La Ecuación 2 es igual a %.4f \t", E2);} 
	else { 
		printf("Error, error, error, ptzzzzz");} 
} 

