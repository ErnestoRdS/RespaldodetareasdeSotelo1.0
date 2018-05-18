#include<stdio.h> 
#include<math.h> 
int main() 
{ 
	float y, x; 
	printf("Introduce el valor de Y \t"); 
	scanf("%f", &y);  
	if ((y>0)&&(y<11)) 
	{ 
		x = y + 36; 
		printf("X = %.2f \t", x); 
	} 
	else if ((y>=11)&&(y<33)) 
	{ 
		x = pow(y,2) - 10; 
		printf("X = %.2f \t", x); 
	} 
	else if ((y>=33)&&(y<=64)) 
	{ 
		x = pow(y,3) + pow(y,2) - 1; 
		printf("X = %.2f \t", x); 
	} 
	else 
	{
		printf("X = 0"); 
	}
}		
