#include<stdio.h> 
int main() 
{ 
	float n1, n2, ope; 
	char op; 
	printf("Introduce tu primer número \t"); 
	scanf("%f", &n1); 
	printf("Introduce tu segundo número \t"); 
	scanf("%f", &n2); 
	printf("¿Qué quieres hacer con ellos? \n"); 
	printf("Sumar .. + \n"); 
	printf("Restar .. - \n "); 
       	printf("Multiplicar .. * \n"); 
	printf("Dividir .. / \n"); 
	scanf(" %c", &op); 
	if (op=='+') 
	{ 
		ope = n1 + n2; 
		printf("La suma es %.2f \n", ope); 
	} 
	else if (op=='-') 
	{ 
		ope = n1 - n2; 
		printf("La resta es %.2f \n", ope); 
	} 
	else if (op=='*') 
	{ 
		ope = n1 * n2; 
		printf("La multiplicación es %.2f \n", ope); 
	} 
	else if (op=='/') 
	{ 
		ope = n1 / n2; 
		printf("La división es %.2f \n", ope); 
	} 
	else 
	{ 
		printf("Aquí no se va a hacer lo que tú quieras, vete \n"); 
	} 
} 
