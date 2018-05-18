#include<stdio.h> 
int main() 
{ 
	/*Programa para determinar qué deporte deberías practicar 
	  según la temperatura*/ 
	float tem; 
	printf("Introduzca la temperatura en grados Fahrenheit, plotz"); 
	scanf("%f", &tem); 
	if (tem<=10) 
	{ 
		printf("Marcha"); 
	} 
	else if ((tem>10)&&(tem<=32)) 
	{ 
		printf("Esquí"); 
	} 
	else if ((tem>32)&&(tem<=70)) 
	{ 
		printf("Golf"); 
	} 
	else if ((tem>70)&&(tem<=85)) 
	{ 
		printf("Tenis"); 
	} 
	else 
	{ 
		printf("Natación"); 
	} 
} 
