#include<stdio.h> 
int main() 
{ 
	float n1, n2, n3; 
	printf("Introduzca número 1 \n"); 
	scanf("%f", &n1); 
	printf("Introduzca número 2 \n"); 
	scanf("%f", &n2); 
	printf("Introduzca número 3 \n"); 
	scanf("%f", &n3); 
	if ((n1>n2)&&(n1>n3)) 
	{ 
		printf("%.4f es el mayor de los números \n", n1); 
	} 
	else if ((n2>n1)&&(n2>n3)) 
	{ 
		printf("%.4f es el mayor \n", n2); 
	} 
	else if ((n3>n1)&&(n3>n2)) 
	{ 
		printf("%.4f es mayor que %.4f y que %.4f \n", n3, n1, n2); 
	} 
	else 
	{ 
		printf("¿Qué diablos haces? Voy a explotar"); 
	} 
} 
