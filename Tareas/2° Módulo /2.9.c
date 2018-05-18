#include<stdio.h> 
#include<math.h> 
int main() 
{ 
	int A, B, N; 
	printf("Introduce A \t"); 
	scanf("%d", &A); 
	printf("Introduce B \t"); 
       	scanf("%d", &B); 
	printf("Introduce N \t"); 
       	scanf("%d", &N); 
	if (pow((A/B),N)==((pow(A,N))/(pow(B,N)))) 
	{ 
		printf("La Igualdad se cumple"); 
	} 
	else 
	{ 
		printf("La Igualdad no se cumple"); 
	} 
} 
