#include<stdio.h> 
int main() 
{ 
	int cat; 
	float mon, final; 
	printf("Introduce el precio que viene en el ticket \n"); 
	scanf("%f", &mon); 
	printf("¿A qué clase social (categoría) perteneces? \n"); 
	scanf("%d", &cat); 

	switch (cat) 
	{ 
		case 1: 
		final = mon * 0.65; 
		printf("Pagarás %.2f \t \n", final); 
		break; 
		case 2: 
		final = mon * 0.78; 
		printf("El precio es %.2f \t \n", final); 
		break; 
		case 3:
	  final = mon * 0.85; 
		printf("Paga %.2f pesos y vete \t \n", final); 
		break; 
		case 4: 
		final = mon * 0.5; 
		printf("Danos %.2f pesos y puedes irte \n", final); 
		break; 
		default: 
    printf("%.2f \n", mon); 
		printf("Bien, no tiene descuento, significa que no eres pobre \n");
	} 
}	
