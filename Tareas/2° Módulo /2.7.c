#include<stdio.h> 
int main() 
{ 
	int n1, n2; 
	printf("Introduzca el número 1 \t"); 
	scanf("%i", &n1); 
	printf("Introduce número 2 \t"); 
	scanf("%i", &n2); 
	if (n1%n2==0){ 
		printf("%i sí es divisor de %i", n2, n1);} 
	else { 
		printf("No es divisor :[");} 
} 
