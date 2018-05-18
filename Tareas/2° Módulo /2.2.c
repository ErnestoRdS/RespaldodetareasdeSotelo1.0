#include<stdio.h> 
int main() 
{ 
	//Programa para calcular descuento en compras mayores a $2500. 
	float com, final; 
	printf("¿Cuánto gastó? \n"); 
	scanf("%f", &com); 
	if (com>2500){ 
		final = com * .92; 
		printf("Su total a pagar es de %.2f \t", final);} 
	else { 
		final = com; 
		printf("Usted debe pagar %.2f \t", final);} 
} 
