#include<stdio.h> 
int main() 
{ 
	//Programa para calcular el aumento de sueldo. 
	float sueldo, sfinal; 
	printf("¿Cuál es su sueldo actualmente? \t"); 
       	scanf("%f", &sueldo); 
	if (sueldo<1000){ 
		sfinal = sueldo * 1.15; 
		printf("Su sueldo final es de %.2f \t", sfinal);} 
	else { 
		sfinal = sueldo * 1.12; 
		printf("Su sueldo final es de %.2f \t", sfinal);} 
} 

