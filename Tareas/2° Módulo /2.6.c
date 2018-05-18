#include<stdio.h> 
int main() 
{ 
	float sueldo; 
	printf("¿Cuánto gana a la fecha? \t"); 
	scanf("%f", &sueldo); 
	if (sueldo<10000)
	{ 
		printf("Su nuevo sueldo será %.2f", sueldo*1.15);
	} 
	else if ((sueldo>=10000)||(sueldo<=15000))
	{ 
		printf("Tu nuevo salario es %.2f", sueldo*1.11);
	} 
	else 
	{ 
		printf("El sueldo que recibirá será %.2f", sueldo*1.08);
	} 
} 
