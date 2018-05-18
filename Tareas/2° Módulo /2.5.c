#include<stdio.h> 
int main() 
{ 
	int dias; 
	float km, bol; 
	printf("¿Cuántos días se quedará? \t"); 
       	scanf("%d", &dias); 
	printf("Kilómetros a recorrer: \t"); 
	scanf("%f", &km); 
	if ((dias>7)||(km>800)){ 
		bol = (km * 0.23) * 0.7; 
		printf("Recorriendo %.2f kms, el precio será %.2f", km, bol);} 
	else { 
		bol = (km * 0.23); 
		printf("El boleto cuesta %.2f pesos", bol);} 
} 	
