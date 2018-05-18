#include<stdio.h> 
#include<math.h> 
int main() 
{ 
	int A, N; 
	printf("Introduce A \t"); 
	scanf("%d", &A); 
	printf("Introduce N \t"); 
	scanf("%d", &N); 
       	if (A!=0) 
	{ 	
		if (pow(A,-N)==(1/(pow(A,N)))) 
		{ 
		       	printf("La Igualdad se cumple, YAY"); 
		} 
		else 
		{ 
			printf("La Igualdad no se cumple, No YAY"); 
		}  		
	} 
	else 
	{ 
		printf("Introuzca un valor diferente de 0"); 
	} 
}
