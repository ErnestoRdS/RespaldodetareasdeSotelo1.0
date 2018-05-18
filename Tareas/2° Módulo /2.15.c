#include<stdio.h> 
int main() 
{ 
	int mod; 
	float pr, pf; 
       	printf("¿Qué modelo quiere? Presione el número correspondiente \n"); 
	printf("Blazer-Trail 1 \n"); 
	printf("Cavallier    2 \n"); 
	printf("Chevy        3 \n"); 
	printf("Opel-Astra   4 \n"); 
	scanf("%d", &mod); 
       	printf("¿Cuánto cuesta el modelo? \t"); 
	scanf("%f", &pr);
	switch (mod) 
	{ 
		case 1: 
		pf = (float) pr * 0.92; 
		printf("El costo final es %.2f \t", pf); 
		break; 
		case 2: 
		pf = (float) pr * 0.95; 
		printf("Usted tendrá que pagar %.2f \t", pf); 
		break; 
		case 3: 
		pf = (float) pr * 0.94; 
		printf("Usted pagará %.2f \t", pf); 
		break; 
		case 4: 
		pf = (float) pr * 0.91; 
		printf("El auto será suyo por la cómoda cantidad de %.2f",pf); 
	       	break; 
		default: 
		printf("Lo siento, este modelo no tiene descuento :("); 
	} 
} 
